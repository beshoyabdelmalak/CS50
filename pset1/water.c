#include <stdio.h>
#include <cs50.h>
int main()
{
    int x;
    printf ("Minutes:");
    x=GetInt();
    printf("Bottles:%d\n",x*12);
    return 0;
}