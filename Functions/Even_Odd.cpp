#include <iostream>
using namespace std;

void Even_Odd(int n)
{
    if(n%2 ==0)
    {
        cout << "Even"<<endl;
    }
    else
    {
        cout << "Odd"<<endl;
    }
}

int main()
{
    Even_Odd(3);
    Even_Odd(6);
}