#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(i==0 || j==0 || j==n-i-1)
            {
                cout << j+1+i;
            }
            else{
                cout << " ";
            }
        }
        cout <<endl;
    }
}