import numpy as np

n = int(input())
m = int(input())
l = []
for i in range(n):
    x = int(input())
    l.append(x)

a = np.array(l)
# print(a)
a = np.sort(a)

k_min = 0
k_max = a[-1] + m
# print(k_max)
# x = m // n
# y = m % n
# print(x,y)

for i in range(m):
    a = np.sort(a)
    a[0] += 1
a = np.sort(a)

k_min = a[-1]
print(k_min,k_max)
# print(a)