bacteria = int(input())

def decimalToBinary(n):
    return bin(n).replace("0b", "")

num = (decimalToBinary(bacteria))
# print(type(num))

count = 0
for i in num:
    if i == '1':
        count += 1

print(count)
