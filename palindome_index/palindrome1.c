//Palindrome index
#include<stdio.h>
#include<string.h>
int palindrome_index(char []);
int main()
{
    int l,i,pal;
    char string[100];
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%s",string);
        pal=palindrome_index(string);
        printf("\n%d\n",pal);
    }
    return 0;
}

int palindrome_index(char s[100])
{
    int i,j,a,b,n;
    n=strlen(s);
    i=0;
    j=n-1;
    while(i<n)
    {
        if(s[i]!=s[j])
        {
            break;
        }
        i+=1;
        j-=1;
    }
    if(i>j)
    {
        return -1;
    }
    a=i+1;
    b=j;
    while(a<j && b>i+1)
    {
        if(s[a]!=s[b])
        {
            return j;    
        }
        a+=1;
        b-=1;
    }
    return i;
}