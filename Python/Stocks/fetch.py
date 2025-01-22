import yfinance as yf
import os
import datetime

nifty50_symbols = [
    "RELIANCE.NS",
    "TCS.NS",
    "HDFCBANK.NS",
    "HINDUNILVR.NS",
    "ICICIBANK.NS",
    "INFY.NS",
    "KOTAKBANK.NS",
    "ITC.NS",
    "HDFC.NS",
    "LT.NS",
    "BAJFINANCE.NS",
    "ASIANPAINT.NS",
    "AXISBANK.NS",
    "TITAN.NS",
    "MARUTI.NS",
    "SBIN.NS",
    "HCLTECH.NS",
    "TECHM.NS",
    "ONGC.NS",
    "NESTLEIND.NS",
    "BAJAJFINSV.NS",
    "NTPC.NS",
    "POWERGRID.NS",
    "SUNPHARMA.NS",
    "BAJAJ-AUTO.NS",
    "HEROMOTOCO.NS",
    "DRREDDY.NS",
    "ULTRACEMCO.NS",
    "M&M.NS",
    "COALINDIA.NS",
    "BRITANNIA.NS",
    "JSWSTEEL.NS",
    "GRASIM.NS",
    "SHREECEM.NS",
    "ADANIPORTS.NS",
    "DIVISLAB.NS",
    "CIPLA.NS",
    "EICHERMOT.NS",
    "TATAMOTORS.NS",
    "ONGC.NS",
    "IOC.NS",
    "HINDALCO.NS",
    "TATASTEEL.NS",
    "UPL.NS",
    "INDUSINDBK.NS",
    "VEDL.NS",
    "WIPRO.NS",
    "SBILIFE.NS",
    "BAJAJ-AUTO.NS",
    "DRREDDY.NS",
    "BPCL.NS",
    "HEROMOTOCO.NS",
    "JSWSTEEL.NS",
    "SHREECEM.NS",
]


data_directory = "nifty50_data"
if not os.path.exists(data_directory):
    os.makedirs(data_directory)

for symbol in nifty50_symbols:
    stock = yf.Ticker(symbol)
    data = stock.history(period="5y", auto_adjust=True)

    filename = os.path.join(data_directory, f"{symbol}.csv")
    data.to_csv(filename)
