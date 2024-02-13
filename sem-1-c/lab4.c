#include <stdio.h>

long inRange(int l, int r, int num) {
    long a = (r - num) & 2147483648;
    long b = (num - l) & 2147483648;
    return a+b;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%ld", !!inRange(-56, 56, x));
    return 0;
}

//    (-56 <= x && x <= 56) ? printf("True") : printf("False");
//2**31 & x если тру то отрицательное


//return (l <= num && num <= r);
