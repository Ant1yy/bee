#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(3);
    cout << a * b / 12.0 << endl;
    return 0;
}