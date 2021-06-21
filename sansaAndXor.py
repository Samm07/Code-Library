def getXor(arr,n):
  res = arr[0]
  for i in range(1,n):
    if i % 2 == 0:
      res = res ^ arr[i]
  
  return res

def main():
  t = int(input())
  while t:
    t -= 1
    n = int(input())
    arr = list(map(int, input().split()))
    
    if(n%2==0):
      print('0')
    
    else:
      print(getXor(arr, n))
    
if __name__ == "__main__":
  main()