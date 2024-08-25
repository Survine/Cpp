#include <iostream>
using namespace std;

void Row_Sum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of Row " << i << " = " << sum;
        cout << endl;
    }
}
void Col_Sum(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of Column " << i << " = " << sum;
        cout << endl;
    }
}

int main()
{
    int arr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int row = 3, col = 4;
    Row_Sum(arr, row, col);
    cout << endl;
    Col_Sum(arr, row, col);
}