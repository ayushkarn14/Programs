import os
os.chdir("d:\\Ayush\\Python\\attendence")
input_file = input("Input file without extension >")
output_file = input("output file without extension >")
with open(f"{input_file}.csv","r") as f:
    data = f.read().split('\n')
date = data[2][17:28]
data = data[5:]
rolls = []
for i in data:
    index = i.find(" 21")
    if index != -1:
        rolls.append(i[index+1:index+10])
with open(f"{output_file}.csv",'r') as f :
    data = f.read().split('\n')
new_file_data = f'{data[0]},{date}\n'
for index in range(1,len(data)):
    line = data[index]
    lineroll = line[4:13]
    if lineroll in rolls :
        att = 'P'
    else:
        att = "AB"
    new_file_data += f'{line},{att}\n'
new_file_data = new_file_data [:-1]
with open(f"{output_file}.csv",'w') as f :
    f.write(new_file_data)