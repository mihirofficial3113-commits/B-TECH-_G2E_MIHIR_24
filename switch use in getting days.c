#include<stdio.h>
int main()
{
int day;//1-monday,2-tuesday,3-wednesday,4-thursday,5-friday
printf ("enter day (1-5):");
scanf ("%d",&day);
{
   switch(day)
   {
    case 1:
    printf("monday");
    break;
    case 2 :
    printf("tuesday");
    break;
    case3:
    printf("wednesday");
    break;
    case 4 :
    printf("thursday");
    break;
    case 5 :
    printf("friday");
    break;
    default:
    printf("weekend");
   }

}
}
