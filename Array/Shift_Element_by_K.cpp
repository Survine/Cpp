#include <iostream>
using namespace std;

void Shift(int arr[], int n, int k)
{
    int temp[k];
    
    // Copy the last k elements to temp array
    for(int i = 0; i < k; i++)
    {
        temp[i] = arr[n-k+i];
    }

    // Shift the original array to the right by k positions
    for(int i = n-1; i >= k; i--)
    {
        arr[i] = arr[i-k];
    }

    // Copy the temp array elements back to the original array
    for(int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }

    // Print the shifted array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int k = 2;
    Shift(arr, n, k);
}
