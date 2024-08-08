#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 1)
    {
        cout << "1 is neither prime or composite";
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Composite";
            break;
        }
        else
        {
            cout << "Prime";
            break;
        }
    }
}