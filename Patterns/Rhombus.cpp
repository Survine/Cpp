#include <iostream>
using namespace std;

int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        //spaces - Inverted half Pyramid
        for(int j=0; j<n-i; j++)
        {
            cout << "  ";
        }

        //Stars
        for(int k=0; k<n; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}