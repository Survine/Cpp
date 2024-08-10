#include <iostream>
using namespace std;

int main()
{
    int b=4,l=6;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<l; j++)
        {
            if(i==0 || i==b-1 || j==0 ||j==l-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout <<endl;
    }
}