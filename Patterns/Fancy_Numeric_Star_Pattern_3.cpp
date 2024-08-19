#include <iostream>
using namespace std;

int main()
{
    int n = 4, m = 1;

    // First pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << m;
                m++;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    // Inverted pyramid
    int z = m - n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << z;
                z++;
            }
            else
            {
                cout << "*";
            }
        }
        z=z-(2*(n-i)-1);
        cout << endl;
    }

    return 0;
}
