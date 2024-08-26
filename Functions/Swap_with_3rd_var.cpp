#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp;
    cout << "Before Swap : " << "a = " << x << " b = " << y << endl;
    temp = x;
    x = y;
    y = temp;
    cout << "After Swap : " << "a = " << x << " b = " << y << endl;
}

int main()
{
    int a = 2, b = 9;
    swap(a, b);
}