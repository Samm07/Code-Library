def reverse(s):
    return s[::-1]

def checkPalindrome(s):
    if s==s[::-1]:
        return True
    return False

def printDuplicates(s):

    d=dict()
    for x in s:
        d[x]=s.count(x)

    for key,value in d.items():
        if value>1:
            print(key, end=' ')

def removedDuplicates(s):

    s=list(set(list(s)))
    s=''.join(s)
    return s



print(reverse('kle'))
print(checkPalindrome('mom'))
printDuplicates('geeksforgeeks')
print(removedDuplicates('geeksforgeeks'))