#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(int argc,char* argv[])
{
    if (argc !=2 )
    {
        printf("Error");
        return 1;
    }
    int n,i,m,c,x;
    string k,s;
    k=argv[1];
    x =strlen(k);
    for(i=0;i<x;i++)
    {
        if (isdigit(k[i]))
        {
            printf("Error");
        return 1;
        }
    }
    s=GetString();
    int j=0;
    for (i=0,n=strlen(s) ; i<n ; i++)
    {
        if (isalpha(s[i]))
        {
        if (j==x)
            j=(j%x);
        m=tolower(k[j])-97;
        if (isupper(s[i]))
        {
            c=s[i]+m;
            if (c>90)
                c=c%90+64;
            printf("%c",c);
        }
        if (islower(s[i]))
        {
            c=s[i]+m;
            if(c>122)
                c=c%122+96;
            printf("%c",c);
        }
        j++;
        }
        else 
            printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}