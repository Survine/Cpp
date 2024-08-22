#include <iostream>
using namespace std;

int setKthBit(int N, int K)
{
    // Write Your Code here
    int value = 1 << K;
    return N | value;
}

int main()
{
    cout << setKthBit(10,2);
}
