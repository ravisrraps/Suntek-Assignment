x = [2,3,-2,4]
y = []
for i in range(len(x)):
    if(i < len(x)):
        a = x[i]*x[i+1]
        y.append(a)
        print(max(y))
        break