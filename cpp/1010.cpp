#include<iostream>
using namespace std;

int main()
{
    int a,b,d,e;
    float c,f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << fixed;
    cout.precision(2);
    cout << "VALOR A PAGAR: R$ " << b * c + e * f << endl;
    return 0;
}