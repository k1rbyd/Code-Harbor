ans=['A','B','B','A','C']
l=[]
number = int(input("Enter the number of times:"))
for x in range(number):
    sum=0
    inp=list(input("Enter the ans sheet:").split())
    for j in range(5):
        if inp[j]=="X":
            pass
        elif inp[j]==ans[j]:
            sum+=2
        else:
            sum-=0.5
    print(sum)