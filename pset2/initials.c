#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main()
{
    string s=GetString();
    int n;
    int i;
    printf("%c",toupper(s[0]));
    for (i=1,n=strlen(s);i<n;i++)
    {
        if (s[i]==' ')
        printf("%c",toupper(s[i+1]));
    }
    printf("\n");
    return 0;
}