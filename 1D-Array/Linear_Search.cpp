#include <iostream>
using namespace std;

bool Linear_Search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {2, 6, 8, 4, 5, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    cout << (Linear_Search(arr, size, target) ? "Target Found" : "Target Not Found") << endl;
    return 0;
}
