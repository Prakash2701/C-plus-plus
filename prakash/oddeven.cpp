#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter numbar" << endl;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "numbar is even";
    }
    else
    {
        cout << "numar is odd";
    }

    return 0;
}