#include <stdio.h>

void main()
{
int n,i,sum_cb=0;
clrscr();

for(i=1;i<=n;i++)
{
sum_cb+=i*i*i;
}
printf("CUBE OF %d NATURAL NUMBERS= %d",n,sum_cb);

getch();
}