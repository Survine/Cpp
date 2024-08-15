#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int n = num / 2;
    for (int i = 0; i < n; i++)
    {
        // gaps upper
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars upper
        for (int k = 0; k < i + 1; k++)
        {
            if (k == 0 || k == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        // gaps lower
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars lower
        for (int k = 0; k < n - i; k++)
        {
            if (k == 0 || k == n - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}