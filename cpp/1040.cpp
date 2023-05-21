#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a,b,c,d,e,m;
    string s;
    cin >> a >> b >> c >> d;
    m = (a * 2 + b * 3 + c * 4 + d) / 10;
    cout << setprecision(1) << fixed;
    if(m >= 7){
        cout << "Media: " << m << "\nAluno aprovado." << endl;
    }
    else if(m < 5){
        cout << "Media: " << m << "\nAluno reprovado." << endl;
    }
    else{
        cin >> e;
        cout << "Media: " << m << endl;
        cout << "Aluno em exame.\nNota do exame: " << e << endl;
        if((m/2 + e/2) < 5){
            cout << "Aluno reprovado." << endl;
        }
        else{
            cout << "Aluno aprovado." << endl;
        }
        cout << "Media final: " << (m/2 + e/2) << endl;
    }
    return 0;
}