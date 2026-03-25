#include<stdio.h>
int main()
{
int firstnum,secondnum,result;
char operator;
printf("enter the first number:");
scanf("%d",&firstnum);
printf("enter the second number:");
scanf("%d",&secondnum);
printf("enter the operator(+,-,*,/):");
scanf("%c",&operator);
scanf("%c",&operator);
switch(operator) {

case '+':
result=firstnum+secondnum ;
printf("addition is %d",result);
break;
case'-':
result=firstnum-secondnum;
printf("substraction is :%d",result);
break;
case'*':
result=firstnum*secondnum;
printf("multiplication is %d",result);
break;
case'/':
result=firstnum/secondnum;
printf("quotient is %d",result);
break;
default:
printf("opps"); 
}

    return 0;
}
