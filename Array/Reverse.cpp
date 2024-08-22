#include <iostream>
using namespace std;

void Reverse(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i<=j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    Reverse(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}