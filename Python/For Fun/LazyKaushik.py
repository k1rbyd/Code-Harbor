#a program to make a list with tuples inside ordered by the second element...like example ("xxx",1),("yyy",3),("zzz",5)
l1 = input("Enter the list: ")
strng=eval(l1)
d1 = dict(strng)
new = {key: val for key, val in sorted(d1.items(), key = lambda ele: ele[1])} 
l2 = list(map(list,new.items()))
print(l2)