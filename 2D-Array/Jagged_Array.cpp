#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> arr;

    vector<int> vec1 (9,2);
    vector<int> vec2 (2,6);
    vector<int> vec3 = {1,2,3};
    vector<int> vec4 = {1,2,3,4};
    vector<int> vec5 = {1,2,3,4,5};

    arr.push_back(vec1);
    arr.push_back(vec2);
    arr.push_back(vec3);
    arr.push_back(vec4);
    arr.push_back(vec5);

    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size();j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}