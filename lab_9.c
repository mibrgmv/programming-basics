#include <stdio.h>

int isSimple(int n) {
    int result = 1;
    for (int i=2; i<n; i++)
        if (n % i == 0) {
            result = 0;
            break;
        }
    return result;
}
void PrintSimple(int n) {
    for (int i = 2; i <= n; i++) {
        if (isSimple(i)) {
            printf("%d ", i);
        }
    }
}
void BankAccount(int sum, int interest_rate, int months) {
    for (int i = 0; i < months; i++) {
        sum *= 1 + (interest_rate * 0.01);
    }
    printf("%d", sum);
}
int main() {
    PrintSimple(17);
    printf("\n");
    BankAccount(1000, 5, 12);

    return 0;
}