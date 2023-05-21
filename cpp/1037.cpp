#include<iostream>
using namespace std;

int main()
{
    float a;
    cin >> a;
    if((a < 0) or (a > 100)){
        cout << "Fora de intervalo" << endl;
    }
    else if(a > 75){
        cout << "Intervalo (75,100]" << endl;
    }
    else if(a > 50){
        cout << "Intervalo (50,75]" << endl;
    }
    else if(a > 25){
        cout << "Intervalo (25,50]" << endl;
    }
    else{
        cout << "Intervalo [0,25]" << endl;
    }
    return 0;
}