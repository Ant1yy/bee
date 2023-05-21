#include<iostream>
using namespace std;

int main(){
    int a,i,j;
    int b[3]={3600,60,1};
    int c[3];
    cin >> a;
    for(i=0;i<3;i++){
        c[i] = a / b[i];
        a = a % b[i];
    }
    cout << c[0] << ":" << c[1] << ":" << c[2] << endl;
    return 0;
}