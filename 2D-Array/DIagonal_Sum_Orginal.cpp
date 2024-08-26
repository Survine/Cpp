#include <iostream>
using namespace std;

void diagonalPrint(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i];
    }
    cout << "Sum of diagonal : " << sum;
}

int main()
{
    int arr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {8, 6, 1, 2}};
    int row = 4, col = 4;
    diagonalPrint(arr, row, col);
}