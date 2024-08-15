#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // First pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << i + 1;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    // Inverted pyramid
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < 2 * (n - i) - 3; j++)
        {
            if (j % 2 == 0)
            {
                cout << n - 1 - i;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
