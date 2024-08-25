#include <iostream>
#include <climits>
using namespace std;

void Minimum(int arr[],int size)
{
    //Initialising with opposite of what asked,
    //We take the largest value as initial
    //To compare than traditional approach

    int min=INT_MAX;
    for(int i=0; i<size;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Min : " << min;
}

int main()
{
    int arr[] = {2, 6, 8, 4, 5, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    Minimum(arr,size);
}