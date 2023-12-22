start=int(input("Enter the starting number:"))
end=int(input("Enter the ending number:"))
value=0
if end<start:
    start,end = end,start
for i in range(start,end+1):
    if i%2==0:
        value=value+i
print(value)