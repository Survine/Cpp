#include <iostream>
using namespace std;

void swap(int x, int y)
{
    cout << "Before Swap : " << "a = " << x << " b = " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After Swap : " << "a = " << x << " b = " << y << endl;
}

int main()
{
    int a = 7, b = 9;
    swap(a,b);
}