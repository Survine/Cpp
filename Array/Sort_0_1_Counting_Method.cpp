#include <iostream>
using namespace std;

void Sort(int arr[], int size)
{
    int count_0 = 0;
    int count_1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else if (arr[i] == 1)
        {
            count_1++;
        }
    }
    cout << endl;
    // int i;
    // for(i=0; i<count_0;i++)
    // {
    //     arr[i]=0;
    // }
    // for(int j=i; j<size;j++)
    // {
    //     arr[j]=1;
    // }
    int i=0;
    while(count_0--) //ALternative loop
    {
        arr[i] = 0;
        i++;
    }
    while(count_1--)
    {
        arr[i] =1;
        i++;
    }

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[]= {0,1,0,1,0,1,1,1,0};
    int n=9;
    Sort(arr,n);
}