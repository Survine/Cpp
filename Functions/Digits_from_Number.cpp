#include <iostream>
using namespace std;

void PrintDigits(int n)
{
    if (n == 0)
        return;

    // Recursive call to print the digits of the number except the last digit
    PrintDigits(n / 10);

    // Print the last digit
    cout << n % 10 << endl;
}

int main()
{
    int number = 6782;
    if (number == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        PrintDigits(number);
    }
    return 0;
}