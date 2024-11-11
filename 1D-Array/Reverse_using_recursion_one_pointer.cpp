#include <bits/stdc++.h>
using namespace std;

void reverseRecursion(int i, int arr[], int n)
{
    if (i > n / 2)
        return;
    swap(arr[i],arr[n-i-1]);
    reverseRecursion(i+1,arr,n);
}

void Print_Array(int arr[],int size)
{
    for(int i=0; i<size;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {5, 7, 9, 1, 2};
    reverseRecursion(0, arr, 5);
    Print_Array(arr,5);
    return 0;
}