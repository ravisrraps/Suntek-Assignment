num = [4,5,6,7,0,1,2]
x = int(input())
for i in range(len(num)):
    if(x in num):
        print(x)
        print(num.index(x))
        break
    else:
        print(-1)
        break