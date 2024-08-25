#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int size)
{
    //Dutch National Flag Algorithm
    int low = 0;         // Pointer to place 0s
    int high = size - 1; // Pointer to place 1s
    int i = 0;

    while (i <= high)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[low]);
            i++;
            low++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 1, 0, 0, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortZeroOne(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
