#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << "*" <<endl;
    for (int i = 0; i < n - 2; i++)
    {
        for (int k = 0; k < 1; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (int k = 0; k < 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 3; i++)
    {
        for (int k = 0; k < 1; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - 3 - i; j++)
        {
            cout << j + 1;
        }
        if (i == 0)
        {
            for (int z = 0; z < 1; z++)
            {
                cout << z + 1;
                continue;
            }
        }
        for (int k = 0; k < 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout <<"*";
}