#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <i + 1; j++)
        {
            if (j == 0)
            {
                cout << j + 1;
            }
            else
            {
                cout << " ";
            }
        }
        for (int k = 0; k < 1; k++)
        {
            if(i==0)
            {
                continue;
            }
            else
            {
                cout << i+1;
            }
        }
        cout << endl;
    }

    for(int i=0; i<1; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << j+1;
        }
    }
}