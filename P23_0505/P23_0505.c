#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="SOS";
    char s2[1000];

    scanf("%s",&s2[0]);
    int i,j,count=0;

    for(i=0; i<strlen(s2); )
    {
        if( strncmp(s1,s2+i,3) != 0 )
        {
            for(j=0; j<3; j++)
            {
                if( s1[j] != s2[j+i])
                {
                    count++;
                }
            }
        }
        i=i+3;
    }
    printf("%d",count);
    return 0;
}
