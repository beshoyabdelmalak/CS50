#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(int argc,char* argv[])
{
    if (argc !=2)
    {
        printf("Error");
        return 1;
    }
    int k,i,n;
    k=atoi(argv[1]);
    k=k%26;
    string s;
    s= GetString();
    for (i=0,n=strlen(s);i<n;i++)
    {
        if (isalpha(s[i]))
        {
        int m=0;
        m=(int)s[i]+k;
        if(isupper(s[i]))
        {
            if (m>90)
            {
                m=m%90+64;
                printf("%c",m);
            }
            else 
            printf("%c",m);
        }
        if (islower(s[i]))
        {
            if (m>122)
            {
                m=m%122+96;
                printf("%c",m);
            }
            else 
                printf("%c",m);
        }
        }
        else
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}