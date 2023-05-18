a=input("Enter the Data Frame: ")
b=a.replace("ESC","|ESC|ESC|")
s=b.replace("FLAG","|FLAG|FLAG|")
header="HEADER"
trailer="TRAILER"
print("|"+header+"|"+s+"|"+trailer+"|")