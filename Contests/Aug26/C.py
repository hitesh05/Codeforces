t = int(input())

def to_int(s):
    num = int(s,2)
    return num

for i in range(t):
    n = int(input())
    s = input()

    l1 = 0
    if len(s) % 2 == 0:
        r1 = int(len(s)/2)
    else:
        r1 = int((len(s)+1)/2)
    l2 = r1
    r2 = len(s)

    while(1):
        n1 = to_int(s[l1:r1])
        n2 = to_int(s[l2:r2])

        if(n1 == 0 or n2 == 0):
            print(l1,r1-1,l2,r2-1)
            break
        if(n1 % n2 == 0):
            print(l1,r1-1,l2,r2-1)
            break
        if(n2%n1 == 0):
            print(l2,r2-1,l1,r1-1)
            break
        
        if(n1<n2):
            r1 = r1+1
        else:
            r1 = r1+1
            l2 = l2-1


