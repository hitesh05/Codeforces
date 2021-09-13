x = 16000

print(x,x%100)

for i in range(x):
    if(i%2==0):
        print(1,end=' ')
    else:
        print(0, end= ' ')

print()
for i in range(int(x)):
    if(i==0):
        continue
    print(1,i)