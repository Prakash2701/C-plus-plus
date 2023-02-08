#include <iostream>
using namespace std;

int main()
{
    int b, i, k;

    for (i = 1; i <= 7; i++)
    {
        for (b = -7; b <= i; b++)
        {
            cout << " ";
        }
        for (k = 7; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}