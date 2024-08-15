#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // gaps
        for (int j = 0; j < i+1; j++)
        {
            cout << " ";
        }
        // stars
        for (int k = 0; k < n-i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}