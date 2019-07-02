#include<stdio.h>
#include<conio.h>
void main()
{
   int num[]={24,30,10,14,20,35};
   int *j,i;
   clrscr();
   j=&num[0];
   for(i=1;i<=3;i++)
    {
        j+=1;
        printf("\n%u is the address",j);
        printf("\n%d is the value",*j);
        j+=1;
        
    }

    getch();
}