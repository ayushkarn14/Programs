import pandas as pd
import os

for entry in os.listdir("nifty50_data/"):
    data = pd.read_csv("nifty50_data/" + entry)
    data["Date"] = pd.to_datetime(data["Date"])
    data.set_index("Date", inplace=True)

    data["10D_SMA"] = data["Close"].rolling(window=10).mean()
    data["20D_SMA"] = data["Close"].rolling(window=20).mean()
    data["50D_SMA"] = data["Close"].rolling(window=50).mean()
    data["100D_SMA"] = data["Close"].rolling(window=100).mean()

    data["52W_High"] = data["High"].rolling(window=252).max()
    data["52W_High"] = data["52W_High"].shift(1)

    in_position = False
    buy_price = 0
    pnl_data = []
    trade_details = []

    for index, row in data.iterrows():
        if row["10D_SMA"] > row["20D_SMA"] > row["50D_SMA"] > row["100D_SMA"]:
            last_date = data.index[-1]
            if (data["Close"] > data["52W_High"]).any() and not in_position:
                in_position = True
                buy_price = row["Close"]
                trade_details.append(
                    {"Date": index.date(), "Type": "Buy", "Price": buy_price}
                )
        elif (row["Close"] < row["20D_SMA"]).any() and in_position:
            in_position = False
            sell_price = row["Close"]
            pnl = sell_price - buy_price
            pnl_percentage = (pnl / buy_price) * 100
            pnl_data.append({"Date": index.date(), "PNL%": pnl_percentage})
            trade_details.append(
                {"Date": index.date(), "Type": "Sell", "Price": sell_price}
            )

    pnl_df = pd.DataFrame(pnl_data)
    pnl_df.set_index("Date", inplace=True)

    pnl_df.to_csv("backtest/" + entry + "pnl_data.csv")
