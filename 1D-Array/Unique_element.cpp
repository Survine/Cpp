#include <iostream>
using namespace std;

int Unique(int arr[],int n)
{
    int ans=0;
    for(int i=0; i<n; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

int main()
{
    int a[] = {2,7,6,5,5,6,8,7,2};
    int n=9;
    cout << Unique(a,n);

}