#include <stdio.h>

int main() {
    int x, y;
    printf("Enter your x (int): ");
    scanf("%d", &x);
    printf("\nHere is x in base 8 system: %o", x);
    printf("\nHere is x in base 16 system: %X", x);
    printf("\nHere is x shifted right by 4 (base 16): %X", x>>4);
    printf("\nHere is bitwise NOT applied to x (base 16): %X", ~x);
    printf("\nEnter your y (base 16): ");
    scanf("%X", &y);
    printf("\n%X xor %X = %X", x, y, x^y);
    return 0;
}




