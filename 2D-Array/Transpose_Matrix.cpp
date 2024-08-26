#include <iostream>
using namespace std;

void printMatrix(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main()
{
    int arr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 7, 2, 5},
        {8, 6, 1, 2}};
    int row = 4, col = 4;
    cout << "Original matrix :" << endl;
    printMatrix(arr, row, col);
    transpose(arr, row, col);
    cout << "Transpose Matrix :" << endl;
    printMatrix(arr, row, col);
}