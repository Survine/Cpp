#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    int n = num / 2;
    //First Half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        for(int k=0; k< 2*(n-i)-2; k++)
        {
            cout << "  ";
        }

        for(int m=0; m<i+1; m++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //Second Half
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<n-i; k++)
        {
            cout << "* ";
        }
        for(int j=0; j<2*i; j++)
        {
            cout << "  ";
        }
        for(int k=0; k<n-i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}