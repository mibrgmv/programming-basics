#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * concatenation(char *a, char *b) {
    char *res; int i = 0;
    res = malloc(strlen(a) + strlen(b) + 1);
    while (*a != '\0') {
        res[i] = *a;
        a++;
        i++;
    }
    while (*b != '\0') {
        res[i] = *b;
        b++;
        i++;
    }
    res[i] = '\0';
    return res;
}

int main() {
    char *s = concatenation("Hello ", "World!");
    printf("%s", s);
    free(s);
    return 0;
}
