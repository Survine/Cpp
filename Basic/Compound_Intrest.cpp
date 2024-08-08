#include <iostream>
#include <cmath>  
using namespace std;

int main()
{
    int principal = 50000;
    float rate = 5;
    int time = 7;
    int n = 12;
    
    // Calculate compound interest
    float ci = principal * pow(1 + (rate / (n * 100)), n * time);

    cout << "Compound Interest: " << ci << endl;

    return 0;
}
