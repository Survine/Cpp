#include<iostream>
using namespace std;

void quicksort(int arr[], int low, int high)
{
    while (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        quicksort(arr, low, i);
        low = i + 2;
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    quicksort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}