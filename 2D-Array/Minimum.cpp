#include <iostream>
#include <climits>
using namespace std;

void Minimum(int arr[][7], int row, int col)
{
    // Initialising with opposite of what asked,
    // We take the largest value as initial
    // To compare than traditional approach

    int min = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Max : " << min;
}

int main()
{
    int arr[2][7] = {{2, 6, 8, 4, 5, 7, 10},
                     {9, 8, 7, 6, 5, 4, 3}};
    Minimum(arr, 2, 7);
}