from openpyxl import load_workbook
wb = load_workbook(filename = 'area.xlsx')
sheet_ranges = wb['Batch 1']
print(sheet_ranges['D18'].value)
