#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double sub(double a, double b) { return a - b; }
    double mul(double a, double b) { return a * b; }
    double div(double a, double b) { return b != 0 ? a / b : 0; }
};

int main() {
    Calculator calc;
    double x, y;
    char op;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> y;

    double result;
    if (op == '+') result = calc.add(x, y);
    else if (op == '-') result = calc.sub(x, y);
    else if (op == '*') result = calc.mul(x, y);
    else if (op == '/') result = calc.div(x, y);
    else {
        cout << "Invalid operator!" << endl;
        return 0;
    }

    cout << "Result: " << result << endl;
    return 0;
}