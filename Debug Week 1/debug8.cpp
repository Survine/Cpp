#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    
    // Upper part of the pattern
    for(int i = 0; i < n / 2 + 1; i++)
    {
        // Gaps upper side
        for(int j = 0; j < n / 2 - i; j++)
        {
            cout << " ";
        }
        // Upper pyramid
        for(int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        // Gaps lower side
        for(int j = 0; j < n / 2 - i; j++)
        {
            cout << " ";
        }
        // Lower pyramid
        for(int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
