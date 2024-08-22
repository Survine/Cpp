#include <iostream>
using namespace std;

void Print_Array(int arr[],int size)
{
    for(int i=0; i<size;i++)
    {
        cout << 2*arr[i] << " ";
    }
}

int main()
{
    int arr[10],size=10;
    for(int i=0; i<size;i++)
    {
        cin>>arr[i];
    }
    Print_Array(arr,size);
}