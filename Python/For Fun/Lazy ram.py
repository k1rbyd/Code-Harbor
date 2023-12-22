case=int(input(""))
Lis=[]
con=["b","c","d",'f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x',"y","z"]
for j in range(case):
    letters=input('')
    word=input('')
    Lis.append(word)
for k in Lis:
        if type(k)== str:
            a=0;
            for i in k:
                if i in con:
                    a = a + 1;
                else:
                    a=0;
                    continue;
                if a>=4:
                    print("NO");
                    break;
            if a<3:
                print('YES');
