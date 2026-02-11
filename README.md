# B-TECH-_G2E_MIHIR_24
C PROGRAMME 
#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter any three no.\n");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    int greatest = a;
    if (b > greatest) greatest = b;
    if (c > greatest) greatest = c;

    printf("%d is greater\n", greatest);
    return 0;
}
