#include<stdio.h>
#include<string.h>
int main()
{
    int q,k;
    int inc = 0;
    char s[50000];
    scanf("%d",&q);
    for(int i = 1; i<=q; i++)
    {
        scanf("%s",s);
        int l= strlen(s);

        for(int j = 1; j<=l; j++)
        {
            if(s[j-1] != s[l-j])
            {
                if(s[j-1] == s[l-j-1] && s[l-j] == s[j] && s[j]!=s[l-j-2])
                {
                    k = j-1;
                    printf("%d\n",k);
                    break;
                }
                else if(s[j-1]==s[l-j-1] && s[j]==s[l-j-2] && s[j]==s[l-j])
                {
                    k = l-j;
                    printf("%d\n",k);
                    break;
                }
                else if(s[j-1] == s[l-j-1])
                {
                    int k = l-j;
                    printf("%d\n",k);
                    break;
                }
                else if(s[l-j] == s[j]) //&& s[j+1]==s[l-j-1])
                {
                    int k = j-1;
                    printf("%d\n",k);
                    break;
                }
            }
            else if(s[j-1] == s[l-j])
            {
                inc+=1;
                if(inc==l)
                {
                    k = -1;
                    printf("%d\n",k);
                }
            }


        }
        inc = 0;




    }
}
