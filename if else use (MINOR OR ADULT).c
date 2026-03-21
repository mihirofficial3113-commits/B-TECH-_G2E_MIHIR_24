#include<stdio.h>;
int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    if (age >= 18)
    {
        printf("You are an adult.\n");
    }
    else
    {
        printf("you are a minor.\n");
    }
    return 0;
}

