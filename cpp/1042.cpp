#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,i;
    cin >> a >> b >> c;   
    int d[3] = {a,b,c};
    sort(d, d + 3);
    for(i=0;i<3;i++){
        cout << d[i] << endl;
    }
    cout << "\n" << a << "\n" << b << "\n" << c << endl;
    return 0;
}