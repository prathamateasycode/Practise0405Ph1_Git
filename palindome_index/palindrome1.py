#Palindrome index method 1
def palindrome_index(s):
    n=len(s)           #length of string
    i=0
    j=n-1
    while i<n:
        if s[i]!=s[j]:
            break
        i+=1
        j-=1
    if i>j: 
        return -1
    a=i+1
    b=j
    while a<j and b>i+1:
        if s[a]!=s[b]:
            return j
        a+=1
        b-=1
    return i
for i in range(int(input())):
    print(palindrome_index(input()))