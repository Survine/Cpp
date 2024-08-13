#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    
    // Upper part of the pattern
    for(int i = 0; i < n ; i++)
    {
        // Gaps upper side
        for(int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        // Upper pyramid
        for(int k = 0; k < 2 * i + 1; k++)
        {
            if(k==0 || i==n-1 || k==2*i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}