#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=0; i<n; i++)
    {
        //1st rectangle
        for(int j=0; j<3; j++)
        {
            cout << "*";
        }

        //1st Half Pyramid
        for(int k=0; k<n-i; k++)
        {
            cout << "*";
        }

        //Main Pyramid
        for(int m=0; m<2*i+1; m++)
        {
            if(m%2==0)
            {
                cout << i+1;
            }
            else
            {
                cout << "*";
            }
        }

        //2nd Half pyramid
        for(int k=0; k<n-i; k++)
        {
            cout << "*";
        }

        //2nd Rectangle
        for(int j=0; j<3; j++)
        {
            cout << "*";
        }
        cout <<endl;
    }
}