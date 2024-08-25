#include <iostream>
#include <climits>
using namespace std;

void Maximum(int arr[][7], int row, int col)
{
    // Initialising with opposite of what asked,
    // We take the smallest value as initial
    // To compare than traditional approach

    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout << "Max : " << max;
}

int main()
{
    int arr[2][7] = {{2, 6, 8, 4, 5, 7, 10},
                     {9, 8, 7, 6, 5, 4, 3}};
    Maximum(arr, 2, 7);
}