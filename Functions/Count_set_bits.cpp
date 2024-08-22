#include <iostream>
using namespace std;

int count(int n)
{
    int bit, count = 0;
    while (n > 0)
    {
        bit = n % 2;
        if (bit == 1)
        {
            count++;
        }
        n = n / 2;
    }
    return count;
}

int main()
{
    cout << count(10) << endl;
    cout << count(7) << endl;
    cout << count(17) << endl;
}