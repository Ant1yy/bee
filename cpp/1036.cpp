#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if((a == 0) or (d < 0)){
        cout << "Impossivel calcular" << endl;
    }
    else{
        cout << setprecision(5) << fixed;
        cout << "R1 = " << (-b + pow(d,.5)) / 2 / a << endl;
        cout << "R2 = " << (-b - pow(d,.5)) / 2 / a << endl;
    }
    return 0;
}