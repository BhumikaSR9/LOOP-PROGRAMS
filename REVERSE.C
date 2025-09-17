#include <stdio.h>

void main()
{
int num,rev;
int no=num;
int d,rev=0;

printf("ENTER ANY NUMBER");
scanf("%d",&num);

while(no>0)
{
d=no%10;
rev=rev*10+d;
no/=10;
}

printf("REVERSED NUMBER = %d",rev);

getch();

}


