#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0; i<=n-2; i++)
    {
        int mini = i;
        for(int j=i; j<=n-1; j++)
        {
            if(arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}