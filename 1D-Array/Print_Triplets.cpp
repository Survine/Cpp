#include <iostream>
using namespace std;

void Triplet(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for(int k=0; k<n; k++)
            {
                cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
            }
        }
    }
}

int main()
{
    int a[] = {2, 4};
    int n = 2;
    Triplet(a, n);
}