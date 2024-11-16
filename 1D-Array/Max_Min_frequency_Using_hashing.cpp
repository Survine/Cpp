#include <bits/stdc++.h>
using namespace std;

void maxminfreq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int max = INT_MIN;
    int min = INT_MAX;
    for(auto x:mp)
    {
        if(x.second>max)
        {
            max = x.first;
        }
        if(x.second<min)
        {
            min = x.first;
        }
    }
    cout << "Max Frequency : " << max << endl;
    cout << "Min Frequency : " << min << endl;
}

int main()
{
    int arr[] = {5, 7, 9, 1, 2, 2, 2, 7, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxminfreq(arr, n);
    return 0;
}