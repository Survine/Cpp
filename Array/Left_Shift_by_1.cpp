#include <iostream>
using namespace std;

void Shift(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0; i<n;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n=6;
    Shift(arr,n);
}