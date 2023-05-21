#include<iostream>
using namespace std;

int main() {
    int a,b;
    float c;
    cin >> a >> b >> c;
    cout << fixed;
    cout.precision(2);
    cout << "NUMBER = " << a << "\nSALARY = U$ " << b * c << endl;
    return 0;
}