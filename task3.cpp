#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; // Используем long long для больших значений

    cout << "Введите число N: ";
    cin >> n;

    if (n < 0) {
        cout << "Факториал отрицательного числа не определен." << endl;
    } else if (n == 0 || n == 1) {
        cout << "Факториал " << n << " = 1" << endl;
    } else {
        for (int i = 2; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Факториал " << n << " = " << factorial << endl;
    }

    return 0;
}