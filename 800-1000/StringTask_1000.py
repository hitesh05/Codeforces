string = input()
vowels = ['a','e','i','o','u','y']

def isVowel(s):
    s = s.lower()
    for vowel in vowels:
        if s == vowel:
            return True
    return False


s = ''
for i in string:
    if isVowel(i):
        continue
    else:
        s+='.'
        s+=i.lower()

print(s)
    