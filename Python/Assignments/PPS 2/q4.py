L = eval(input())
for i in L:
    ind = L.index(i)
    for k,v in i.items():
        if type(k) == int and type(v) == str:
            L.remove(i)
            t = {v:k}
            L.insert(ind,t)
L_keys = []
L_values = []
for i in L:
    for k,v in i.items():
        L_keys.append(k)
        L_values.append(v)
keys_rep = []
values_rep = []
for i in L_keys:
    if L_keys.count(i)>1:
        keys_rep.append(i)
for i in L_values:
    if L_values.count(i)>1:
        values_rep.append(i)
rep_keys = set(keys_rep)
rep_values = set(values_rep)
for i in rep_keys:
    ind = keys_rep.index(i)
    dv = ''
    for j in L.copy():
        for k,v in j.items():
            if k == i and L.index(j) != ind:
                x = L.pop(L.index(j))
                for v1 in x.values():
                    dv += str(v1)
    for j in L.copy():
        for k,v in j.items():
            if k == i and L.index(j) == ind:
                y = L.pop(ind)
                for k1,v1 in y.items():
                    y[k1] = str(v1) + str(dv)
                L.insert(ind,y)
for i in rep_values:
    ind = values_rep.index(i)
    dk = ''
    for j in L.copy():
        for k,v in j.items():
            if v == i and L.index(j) != ind:
                x = L.pop(L.index(j))
                for k1 in x.keys():
                    dk += k1
    for j in L.copy():
        for k,v in j.items():
            if v == i and L.index(j) == ind:
                y = L.pop(ind)
                for k1,v1 in y.items():
                    t = {k1 + dk:int(v1**(1/3))}	 	  	 	  	  	     	 	 		  	 	
                    L.insert(ind,t)
print(L)