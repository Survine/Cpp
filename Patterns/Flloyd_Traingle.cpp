#include <iostream>
using namespace std;

int main()
{
    int num = 5,k=1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}