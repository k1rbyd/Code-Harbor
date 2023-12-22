class Solution:
    def addTwoNumbers():
        l1 = eval(input("Enter the first list here: "))
        l2 = eval(input("Enter the second list here: "))
        l3 = []
        len1 = len(l1)
        len2 = len(l2)
        if len1 > len2:
            x = len1
            for i in range(len1-len2):
                l2.append(0)
        else:
            x = len2
        for i in range(0,x):
            l3.append(l1[i]+l2[i]) 
        print(l3)

Solution.addTwoNumbers()