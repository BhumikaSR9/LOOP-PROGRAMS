#include <stdio.h>

void main()
{
int i;

printf("EVEN NUMBERS FROM 1 TO 100");

for(i=1;i<=100;i++)
{
if(i%2==0)
{
printf("%d\n",i);
}
}
getch();

}
