#include <iostream>
using namespace std;

void Pairs(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            cout << arr[i] << "," << arr[j] << " -> " << arr[i] + arr[j] << endl;
        }
    }
}

int main()
{
    int a[] = {2, 4, 6};
    int n = 3;
    Pairs(a, n);
}