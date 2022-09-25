#include <stdio.h>
 int main()
 {
    int xInt; int xOct = 0; int i = 1;
    printf("Please, enter a decimal: \n");
    scanf("%d", &xInt);

    while (xInt > 0)
     {
         xOct = (xInt % 8) * i + xOct;
         xInt = xInt / 8;
         i = i * 10;
     }
    printf("Here is your number in base 8 system: \n%d\n", xOct);
    return 0;
 }