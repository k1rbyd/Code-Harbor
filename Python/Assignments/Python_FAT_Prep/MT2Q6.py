ans , solu , values = [] , [] , []
start, end = input("Enter the limits:").split()
start, end = int(start),int(end)
for x in range(start,end+1):
    c=0
    for i in range(2,x):
        if x%i==0:
            c+=1
            break
    if c==0 and ans.count(x)<1 and x>=2:
        ans.append(x)
for k in range(len(ans)-1):
    for j in range(k):
        if ans[j]-ans[j+1]==-2 and solu.count(tuple([ans[j],ans[j+1]]))<1 :
            a = ans[j]
            b =ans[j+1]
            solu.append(tuple([a,b]))
for w in solu:
    for q in w:
        s = w[1]*w[1]
    values.append(s)
if solu==[]:
    print("NIL")
else:
    print(solu)
    print(values)