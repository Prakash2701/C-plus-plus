#include <iostream>
using namespace std;

int main()
{
    int rows, coloums;

    for (rows = 1; rows <= 5; rows++)
    {
        for (coloums = 1; coloums <= 5; coloums++)
        {
            if (coloums <= 5 - rows)
            {
                cout << "*";
            }
            else
            {
                cout << coloums;
            }
        }
        cout << endl;
    }

    return 0;
}