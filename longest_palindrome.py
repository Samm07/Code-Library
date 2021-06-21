def longestPalindrome(s):

    longestP=''
    for i in range(0,len(s)):
        for j in range(i+1,len(s)):
            # print('%d %d'%(i,j))
            if s[i:j]==s[j:i:-1]:
                if(len(longestP)<len(s[i:j+1])):
                    longestP=s[i:j+1]
    
    return longestP

print(longestPalindrome('aaaabbaa'))