#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    int i;
    double a, b[6] = {100,50,20,10,5,2}, c[6] = {100,50,25,10,5,1};
    cin >> a;
    a = a * 100;
    cout << "NOTAS: " << endl;
    for(i=0;i<6;i++){
        cout << floor(a / b[i] / 100) << " nota(s) de R$ " << b[i] << ".00" << endl;
        a = fmod(a, b[i] * 100);
    }
    cout << "MOEDAS: " << fixed << endl;
    for(i=0;i<6;i++){
        cout << setprecision(0) << floor(a / c[i]) << " moeda(s) de R$ " << setprecision(2) << c[i] / 100 << endl;
        a = fmod(a, c[i]);
    }
    return 0;
}