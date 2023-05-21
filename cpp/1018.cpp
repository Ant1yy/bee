#include<iostream>
using namespace std;

int main(){
    int a,i;
    int b[7]={100,50,20,10,5,2,1};
    cin >> a;
    cout << a << endl;
    for(i=0;i<7;i++){
        cout << a / b[i] << " nota(s) de R$ " << b[i] << ",00" << endl;
        a = a % b[i];
    }
    return 0;
}