#include<stdio.h>
#include<conio.h>
void main()
{
   int s[4][2]={{24,30},{10,14},{20,35},{11,22}};
   int i,j;
   clrscr();
   for( i=0;i<=3;i++)
    {
	printf("\n data element %d\t%d is having %u base address",*(s[i]+1),s[i][0],s[i]);
    }
    getch();
}
