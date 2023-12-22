l=eval(input())
if(len(l)>0):
    for i in l:
        if(type(i)==list):
            for j in i:
                l.append(j)
            l.remove(i)
            print(len(l))
            break
        elif(type(i)!=list):
            print('cannot unpack')
            break
else:
    print("cannot unpack")