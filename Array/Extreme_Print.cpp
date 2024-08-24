#include <iostream>
using namespace std;

void Extreme_Print(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i] << " ";
        }
        else
        {
            cout << arr[i] << " ";                 //Here We are printing the First Start of Array
            cout << arr[j] << " ";                 //Here We are printing the Last End of Array
        }
        i++;                                       //Incrementing the starting point
        j--;                                       //Decrementing the ending point
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int size = 5;
    Extreme_Print(a, size);
}