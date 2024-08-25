#include <iostream>
#include <climits>
using namespace std;

void Maximum(int arr[],int size)
{
    //Initialising with opposite of what asked,
    //We take the smallest value as initial
    //To compare than traditional approach
    
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