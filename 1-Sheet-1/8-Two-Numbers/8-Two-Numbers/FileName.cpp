#include <iostream>
using namespace std;

void main()
{
	double X, Y;
	cin >> X >> Y;
	double Z = X / Y;
	cout << "floor " << X << " / " << Y << " = " << floor(Z) << endl;
	cout << "ceil " << X << " / " << Y << " = " << ceil(Z) << endl;
	cout << "round " << X << " / " << Y << " = " << round(Z) << endl;
}