def binary_search(arr,l,r,x):

    if l<=r:
        mid=(l+r)//2

        if arr[mid]==x:
            # print("Pattern found at %d"%(mid))
            return mid

        if x<arr[mid]:
            return binary_search(arr,l,mid-1,x)
        else:
            return binary_search(arr,mid+1,r,x)

    else:
        return -1

arr=[3,5,1,10,9,8,7,6]
arr.sort()
print(arr)
element=5
print(binary_search(arr,0,len(arr)-1,element))
