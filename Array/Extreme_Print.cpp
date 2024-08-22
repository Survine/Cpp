#include <iostream>
using namespace std;

void Extreme_Print(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i] << " ";
        }
        else
        {
            cout << arr[i] << " ";
            cout << arr[j] << " ";
        }
        i++;
        j--;
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int size = 5;
    Extreme_Print(a, size);
}