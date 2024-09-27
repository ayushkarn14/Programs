import pandas as pd
from reportlab.platypus import SimpleDocTemplate, Table, TableStyle, Paragraph
from reportlab.lib import colors
from reportlab.lib.pagesizes import A4
from reportlab.lib.styles import getSampleStyleSheet, ParagraphStyle
from reportlab.lib.units import inch

subject = input("Enter Subject Name : ")
date = input("Enter Date : ")
pdf_name = f"{subject} {date}.pdf"

students = pd.read_csv("StudentList.csv")

students["Application Number"] = students["Application Number"].astype(str).str[-4:]

present = pd.read_csv("present.csv")
present["Application Number"] = present["Application Number"].astype(str)

merged_df = pd.merge(students, present, on="Application Number")
print(merged_df.count())

pdf = SimpleDocTemplate(
    pdf_name,
    pagesize=A4,
    leftMargin=0.5 * inch,
    rightMargin=0.5 * inch,
    topMargin=0.4 * inch,
    bottomMargin=0.4 * inch,
)

styles = getSampleStyleSheet()
title_style = ParagraphStyle(
    name="Title",
    fontName="Helvetica-Bold",
    fontSize=14,
    spaceAfter=12,
    alignment=1,
    spaceBefore=0,
)
title = Paragraph(f"{subject} {date} Section 2", title_style)

table_data = [merged_df.columns.tolist()] + merged_df.values.tolist()

table = Table(table_data)

style = TableStyle(
    [
        ("BACKGROUND", (0, 0), (-1, 0), colors.grey),
        ("TEXTCOLOR", (0, 0), (-1, 0), colors.whitesmoke),
        ("ALIGN", (0, 0), (-1, -1), "CENTER"),
        ("GRID", (0, 0), (-1, -1), 1, colors.black),
    ]
)
table.setStyle(style)

pdf.build([title, table])

print("PDF created successfully with a title and table.")
