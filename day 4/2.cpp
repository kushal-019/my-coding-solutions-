// Write a program to obtain 2 numbers A and B and an arithmetic operator (C) and then design a calculator depending upon the operator entered by the user.So for example if C="+", you have to sum the two numbers.If C="-", you have to subtract the two numbers.If C=" * ", you have to print the product.If C=" / ", you have to divide the two numbers.
// ###Input:
// First line will contain the first number A Second line will contain the second number B.Third line will contain the operator C, that is to be performed on A and B.
// ###Output: Output a single line containing the answer, obtained by, performing the operator on the numbers. Your output will be considered to be correct if the difference between your output and the actual answer is not more than 10^-6

#include <iostream>
#include <iomanip>

using namespace std;

double calculate(double a, double b, char c) {
    double result;
    switch (c) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            cout << "Invalid operator" << endl;
            exit(0);
    }
    return result;
}

int main() {
    double a, b;
    char c;

    cin >> a >> b >> c;

    double answer = calculate(a, b, c);
    cout << setprecision(6) << fixed << answer << endl;

    return 0;
}
