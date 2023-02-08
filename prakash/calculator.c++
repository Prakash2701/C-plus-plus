#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char x;

    cout << "enter value num1 and num2 " << endl;
    cin >> num1 >> num2;

    cout << "enter operator:+,-,*,/,%:";
    cin >> x;

    switch (x)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;

        break;

    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;

        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;

        break;

    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2;

        break;

    default:
        cout << "tu karechhe te khotu chhe";
        break;
    }

    return 0;
}