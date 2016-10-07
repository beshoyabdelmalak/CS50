#include <stdio.h>
#include <cs50.h>
int main()
{
    int x,i,j,z;
    int d=2;
    do 
    {
        printf("Height:");
        x=GetInt();
    }while (x>23 || x<0);
    for(i=0;i<x;i++)
    {
        for (j=0;j<x+1-d;j++)
            printf(" ");
        for(z=0;z<d;z++)
            printf("#");
        printf("\n");    
        d++;
        
    }
    return 0;
    
}