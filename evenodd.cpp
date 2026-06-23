#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= 1; i++) {
        if(num % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    return 0;
}