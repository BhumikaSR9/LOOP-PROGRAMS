#include <stdio.h>

void main()
{
int n,i;
int sum_sq=0;
printf("ENTER n TILL WHERE YOU WANT SUM OF SQUARE:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
sum_sq+=i;
}

printf("SUM OF %d NATURAL NUMBERS = %d",n,sum_sq);

getch();
}

