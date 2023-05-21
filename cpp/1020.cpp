#include<iostream>
using namespace std;

int main(){
    int a,i,j;
    int b[3]={365,30,1};
    int c[3];
    cin >> a;
    for(i=0;i<3;i++){
        c[i] = a / b[i];
        a = a % b[i];
    }
    cout << c[0] << " ano(s)\n" << c[1] << " mes(es)\n" << c[2] << " dia(s)" << endl;
    return 0;
}