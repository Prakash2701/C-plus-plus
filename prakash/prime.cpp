#include <iostream>
using namespace std;

int main()
{
    int a, i;
    cin >> a;

    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << "non prime" << endl;
            break;
        }
    }
    if (i == a)
    {
        cout << "prime numbar" << endl;
    }

    return 0;
}