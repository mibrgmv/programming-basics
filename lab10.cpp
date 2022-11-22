#include <iostream>
#include <cctype>
using namespace std;

int sumOfDigits(int n) {
    if (n > 0) {
        return n % 10 + sumOfDigits(n/10);
    }
    else {
        return 0;
    }
}
int digits(int n) {
    int i = 0;
    do {
        i++;
        n /= 10;
    } while (n != 0);
    return i;
}
int* intToArray(int number) {
    static int arr[100];
    for (int count = digits(number) - 1; count != -1; count--) {
        arr[count] = number % 10;
        number /= 10;
    }
    return arr;
}
void Display(int arr[], int n) {
    cout << "[";
    for (int i = 0; i < n-1; i++)
        cout << arr[i] << ", ";
    cout << arr[n-1] << "]";
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

int main () {
    int num = 3728;
    // Создание массива цифр из данного числа
    int n = digits(num);
    int *arr = intToArray(num);
    Display(arr, n);
    // Подсчет суммы цифр в числе с помощью рекурсии
    cout << sumOfDigits(num) << endl;

    // Удаление лишних пробелов из строки с помощью рекурсии
    char str[100] = "Hello .  Its   me , Marat.";
    Cleaner(str);
    cout << str;

    return 0;
}
