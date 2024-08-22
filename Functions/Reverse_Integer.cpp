#include <iostream>
#include <climits>
using namespace std;

int reverse(int x)
{
    if (x <= INT_MIN)
    {
        return 0;
    }
    int ans = 0, rem = 0;
    bool flag = false;
    if (x < 0)
    {
        flag = true;
        x = -x;
    }
    while (x > 0)
    {
        if (ans > INT_MAX / 10)
        {
            return 0;
        }
        rem = x % 10;
        ans = ans * 10 + rem;
        x = x / 10;
    }
    return flag ? -ans : ans;
}

int main()
{
    cout << reverse(6582) << endl;
    cout << reverse(INT_MIN-2) << endl;
    cout << reverse(1234) << endl;
}