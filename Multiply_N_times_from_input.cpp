#include <iostream>
using namespace std;

int main()
{
    int N,inputValue,product=1;
    cout << "Enter the amount of input: ";
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        cout << "Enter value " << i <<": ";
        cin >> inputValue;
        product *= inputValue;
    }
    cout << product;
}