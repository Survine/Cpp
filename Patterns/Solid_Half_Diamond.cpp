#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    int n = num / 2;
    //First Half
    for (int i = 0; i < num-n; i++)
    {
        for (int j = 0; j < i + 1; j++)
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
        cout << endl;
    }
}