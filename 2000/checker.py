f = open('test', 'w')
a="1000000000"

f.write("100000")
f.write('\n')
for i in range(100000):
    f.write(a)
    f.write('\n')

f.close()

