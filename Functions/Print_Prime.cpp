#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    for(int i=2; i<=num; i++)
    {
        if(isPrime(i) == 1)
        {
            cout << i << " ";
        }
    }
}