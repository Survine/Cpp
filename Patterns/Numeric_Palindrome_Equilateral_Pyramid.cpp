#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=0; i<n; i++)
    {
        //gaps
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }

        //1st half pyramid
        for(int j=0; j<i+1;j++)
        {
            cout << j+1;
        }

        for(int k=i; k>=1; k--)
        {
            cout << k;
        }
        cout <<endl;
    }
}