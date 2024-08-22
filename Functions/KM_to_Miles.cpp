#include <iostream>
using namespace std;

double KM_to_Miles(int km)
{
    return km * 0.621371;
}

int main()
{
    int km = 10;
    cout << KM_to_Miles(km) << endl;
    return 0;
}