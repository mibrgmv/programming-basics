#include <iostream>
#include <string>
using namespace std;

void CountCharacters(string s) {
    int lower = 0, upper = 0, numbers = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            lower++;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            numbers++;
        }
    }
    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    cout << "Numbers: " << numbers << endl;
}
int CalculateFee(int base_fee, int price_of_minute, int minutes) {
    if (minutes <= 499) {
        return base_fee;
    }
    else {
        int total_fee = base_fee + (minutes-499) * price_of_minute;
        return total_fee;
    }
}
void reverse(char str[])
{
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n-i-1]);
}
void itoa(int n, char s[]) {
    int i = 0;
    do {
        s[i++] = n%10 + '0';
    } while ((n /= 10) > 0);
    s[i] = '\0';
    reverse(s);
}
bool isSimple(int n) {
    bool result = true;
    for (int i=2; i<n; i++)
        if (n % i == 0) {
            result = false;
            break;
        }
    return result;
}
void PrintSimple(int n) {
    for (int i = 2; i <= n; i++) {
        if (isSimple(i)) {
            cout << i << ' ';
        }
    }
}
void BankAccount(int sum, int interest_rate, int months) {
    for (int i = 0; i < months; i++) {
        sum *= 1 + (interest_rate * 0.01);
    }
    cout << sum << endl;
}

int main() {
    //
    string str;
    cin >> str; 
    CountCharacters(str);
    //
    cout << CalculateFee(400, 10, 520) << endl;
    //
    int n; char s[10];
    cin >> n;
    itoa(n, s);
    cout << s;
    //
    PrintSimple(17);
    //
    BankAccount(1000, 5, 12);
    //
    return 0;
}
