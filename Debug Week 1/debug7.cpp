/*
Pattern
N = 4
   1
  232
 34543
4567654
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 4; // You can change this value to generate a different size pattern
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        // Print increasing numbers
        for (int k = i; k < 2 * i+1; k++)
        {
            cout << k+1;
        }
        // Print decreasing numbers
        for(int l = 2 * i; l > i; l--)
        {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}