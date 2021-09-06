t = int(input())
l = []

for i in range(t):
    s = input()
    if len(s) <= 10:
        l.append(s)
    else:
        a = ''
        a += s[0]
        length = str(len(s) - 2)
        a+= length
        a+=s[-1]
        l.append(a)

for i in l:
    print(i)