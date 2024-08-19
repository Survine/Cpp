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
    if(num == 1)
    {
        cout << "1 is neither Prime nor composite";
    }
    else
    {
        if(isPrime(num) == 1)
        {
            cout << "Prime";
        }
        else
        {
            cout << "Composite";
        }
    }
}