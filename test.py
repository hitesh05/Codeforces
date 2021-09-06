n = 199999
t = 271108
c = 167597
l = []

import random
for i in range(n):
    r = random.randint(0,100000)
    l.append(r)
# print(l)
print(n,t,c)
for i in l:
    print(i)

# with open('test.txt') as f:
#     f.write(str(n))
#     f.write(str(t))
#     f.write(str(c))
    
#     for i in l:
#         f.write(str(i))

