#include <iostream>
using namespace std;

int main()
{
  for (int a = 1; a <= 5; a++)
  {
    for (int b = 1; b <= a; b++)
    {
      cout << b;
    }
    cout << endl;
  }
  for (int i = 5; i >= 3; i--)
  {
    for (int j = 3; j <= i; j++)
    {

      cout << j;
    }
    cout << endl;
  }

  return 0;
}