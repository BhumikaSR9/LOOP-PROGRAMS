#include <stdio.h>

void main()
{

int n,i;
int sum;

printf("ENTER n TILL WHERE YOU WANT THE SUM OF NATURAL NUMBER:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
sum+=i;
}
printf("SUM OF %d NATURAL NUMBERS= %d",n,sum);

getch();

}