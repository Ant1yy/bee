#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double r;
    cin >> r;
    cout << fixed;
    cout.precision(3);
    cout << "VOLUME = " << pow(r,3) * 3.14159 * 4 / 3.0 << endl;
    return 0;
}