#include <iostream>
using namespace std;

void Print_Array(int arr[], int size)
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
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Total Zeroes : " << count_0 << endl;
    cout << "Total Ones : " << count_1 << endl;
}

void Input_Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int arr[10], size = 10;
    Input_Array(arr, size);
    Print_Array(arr, size);
}