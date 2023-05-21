#include<iostream>
using namespace std;

int main()
{
    double x,y;
    cin >>x >> y;
    cout << fixed;
    cout.precision(3);
    cout << x/y << " km/l" << endl;
    return 0;
}