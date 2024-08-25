#include <iostream>
using namespace std;

void Input_Array(int arr[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter for Row: " << i << " Column :" << j << endl;
            cin >> arr[i][j];
        }
    }
}
void Print_Array(int arr[][5], int row, int col)
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

int main()
{
    int row = 5, col = 5;
    int arr[5][5];
    Input_Array(arr, row, col);
    Print_Array(arr, row, col);
}