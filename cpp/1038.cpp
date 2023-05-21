#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    float c[5] = {4,4.5,5,2,1.5};
    cout << "Total: R$ " << setprecision(2) << fixed << b * c[a-1] << endl;
    return 0;
}