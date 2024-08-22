#include <iostream>
#include <climits>
using namespace std;

void Maximum(int arr[],int size)
{
    int max=INT_MIN;
    for(int i=0; i<size;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Max : " << max;
}

int main()
{
    int arr[] = {2, 6, 8, 4, 5, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    Maximum(arr,size);
}