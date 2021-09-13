a=0
with open('ans') as f:
    for line in f:
        a += int(line)
print(a)