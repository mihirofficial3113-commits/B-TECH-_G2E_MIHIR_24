
#include<stdio.h>
int main()
{
int num,remain,reverse=0;
printf("enter a number:");
scanf("%d",&num);
while(num>0)
{
    remain=num%10;
    reverse=reverse*10+remain;
    num=num/10;
}
printf("reverse of the number is %d",reverse);
return 0;
}