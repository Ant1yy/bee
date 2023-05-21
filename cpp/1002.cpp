#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double pi = 3.14159;
	double r;
	cin >> r;
	cout << fixed;
	cout.precision(4);
	cout << "A=" << pow(r,2) * pi << endl;
}