#include <stdio.h>
#include <ctype.h>

int sumOfDigits(int n) {
    if (n > 0) {
        return n % 10 + sumOfDigits(n/10);
    }
    else {
        return 0;
    }
}
void Cleaner(char *s) {
    if (!s[0] || !s[1]) {
        return;
    }
    if (isspace(s[0]) && isspace(s[1])) {
        for (int i = 0; s[i]; i++) {
            s[i] = s[i + 1];
        }
        Cleaner(s);
    }
    if ((s[1] == '.' || s[1] == ',') && isspace(s[0])) {
        for (int i = 0; s[i]; i++) {
            s[i] = s[i + 1];
        }
        Cleaner(s);
    }
    else {
        Cleaner(s+1);
    }
}
int main() {
    printf("%d\n", sumOfDigits(1829));

    char str[100] = "Hello .  Its   me , Marat. ";
    Cleaner(str);
    printf("%s", str);
    return 0;
}