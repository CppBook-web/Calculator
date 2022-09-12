#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = ' ';

    cout << "Приложение калькулятор." << endl;
    cout << "Введите выражение для вычисления. Формат: a + b, a - b, a * b, a / b."
        << "\nВвод:";

    while (true) {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0) {
            cout << "Деление на ноль запрещено" << endl;
            continue;
        } else {
            switch (oper) {
            case '+':
                result = x + y;
                break;
            case '-':
                result = x - y;
                break;
            case '*':
                result = x * y;
                break;
            case '/':
                result = x / y;
                break;
            default:
                result = 0.0;
            }
        }
        cout << "Результат: " << result << endl;
    }
    return 0;
}
