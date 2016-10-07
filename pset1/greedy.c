#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main ()
{
    float x;
    int count=0;
    int y;
    do
    {
        printf("O hai! How much change is owed?:");
        x=GetFloat();
    }while(x<=0);
    float roundf(float x);
    y=x*100;
    while (y>=25)
    {
        y-=25;
        count++;
    }
    while (y>=10)
    {
        y-=10;
        count++;
    }
    while (y>=5)
    {
        y-=5;
        count++;
    }
    while(y>0)
    {
        y-=1;
        count++;
    }
    printf("%d\n",count);
    return 0;
}