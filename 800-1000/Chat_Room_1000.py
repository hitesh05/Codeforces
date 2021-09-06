a = input()
b = 'hello'

j = 0
x = 0

for i in range(len(a)):
    if a[i] == b[j]:
        j+=1
        x += 1
    
    if x == 5:
        break

if x==5:
    print('YES')
else:
    print('NO')