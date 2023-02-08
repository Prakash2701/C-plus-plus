#include <iostream>
using namespace std;

int main()
{

    for (int a = 1; a <= 20; a++)
    {
        for (int i = 1; i <= 10; i++)
        {

            cout << a << "  " << i << '=' << i * a << endl;
        }
    }

    return 0;
}