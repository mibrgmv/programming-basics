#include <stdio.h>
#include <string.h>

int main() {
    char res[50];
    char a[] = "Hello ";
    char b[] = "World!";
    strcpy(res, a);                    //
    strcat(res, b);                    // Конкантенация строк
    printf("%s\n", res);               //

    printf("%d\n", strcmp(a, b));      // Сравнение строк (0 - идентичны;
                                       // x>0 - код первого отличающегося символа больше в a
                                       // x<0 - код первого отличающегося символа больше в b)
                                       // В данном случае выводится -15 = 8 - 23 (код H - код W)

    char *p = strchr(a, 'o');    //
    int index = (int)(p - a);          // Поиск первого вхождения
    printf("%d\n", index);             //

    char *s;
    for (s = a; *s; s++) {
        if (strchr(b, *s)) {
            printf("%c is in %s\n", *s, a);
        }
    }
    // Поиск каждого символа из второй строки в первой строке

    printf("%ld", strcspn(a, b));
    // Длина отрезка одной строки, не содержащего символы второй строки

    return 0;
}
