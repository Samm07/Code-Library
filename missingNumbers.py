from collections import Counter

n1 = input()
arr = list(map(int, input().split()))
n2 = input()
brr = list(map(int, input().split()))

eles = Counter(brr)
for i in arr:
    eles[i] -= 1

for i in sorted(eles.keys()):
    if(eles[i]>0):
        print(i, end=" ")