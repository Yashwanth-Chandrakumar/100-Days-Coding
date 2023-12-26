party = ('A',"B",'C')
for _ in range(int(input())):
    
    vote = list(map(int,input().split()))
    for i in range(3):
        if vote[i]>50:
            print(party[i])
            break;
    else:
        print("NOTA")
        break;
    
    
