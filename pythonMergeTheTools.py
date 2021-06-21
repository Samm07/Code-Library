def()
st = input()
segLen = int(input())
s = len(st)//segLen
for i in range(s):
    x = st[i*s:i*s+s]
    printed = {}
    for j in x:
        try:
            printed[j]
        except:
            print(j, end='')
            printed[j] = '0'
    print()