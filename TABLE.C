#include<stdio.h>

void main()
{
int num;

println("ENTER ANY NUMBER:");
scanf("%d",&num);

for(i=1;i<=10;i++)
{
printf("%d x %d = %d ",num,i,(num*i));
}

getch();

}