#include <iostream>
using namespace std;

void wavePrint(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = col - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int row = 3, col = 3;
    wavePrint(arr, row, col);
}