#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    float d[3] = {a,b,c};
    sort(d, d + 3);
    if(d[2] >= d[0] + d[1]){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if(d[2] * d[2] == d[0] * d[0] + d[1] * d[1]){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else {
        if(d[2] * d[2] > d[0] * d[0] + d[1] * d[1]){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        else{
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if(a == b and a == c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if(a == b or a == c or b == c){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}