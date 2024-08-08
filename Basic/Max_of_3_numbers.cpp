#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a > b and a > c)
    {
        cout << "max: " << a;
    }
    else if (b > c and b > a)
    {
        cout << "max: " << b;
    }
    else
    {
        cout << "max: " << c;
    }
}