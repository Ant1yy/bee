#include<iostream>
using namespace std;

int main() {
    string a;
    double b,c;
    cin >> a >> b >> c;
    cout << fixed;
    cout.precision(2);
    cout << "TOTAL = R$ " << b + c * .15 << endl;
    return 0;
}