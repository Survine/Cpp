#include <iostream>
using namespace std;

int main()
{
    int n=5;
    char ch;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            ch = 'A' + j;
            cout << ch;
        }
        for(int k=i; k>=1; k--)
        {
            ch = 'A' +k-1;
            cout << ch;
        }
        cout <<endl;
    }
}