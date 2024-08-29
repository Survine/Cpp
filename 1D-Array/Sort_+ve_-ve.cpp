#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void func(int arr[], int n)
{
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[] = {-6, 2, 6, 8, -5};
    int n = 5;
    printArray(arr, n);
    cout << endl;
    func(arr, n);
    printArray(arr,n);
}