x=input("Enter list")
a=eval(x)
l=len(a)
name=[]
age=[]
for i in a:
    name.extend(list(i.keys()))
    age.extend(list(i.values()))
for i in range(len(name)):
    if type(name[i])==int:
        print("loop run")
        t=age[i]
        age[i]=name[i]
        name[i]=t
for i in range(len(age)):
    for j in range(i+1,len(age)):
        if age[i]==age[j]:
            name[i]=name[i]+name[j]
            age[i]=int(age[i]**(1/3))
            del name[j]
            del age[j]
for i in range(len(name)):
    for j in range(i+1,len(name)):
        if name[i]==name[j]:
            age[i]=age[i]*100+age[j]
            del age[j]
            del name[j]
res=[]
for i in range(len(name)):
    ele={name[i]:age[i]}
    res.append(ele)
print(res)