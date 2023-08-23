#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	double pi = 3.141592653;
	double Area;
	double R;
	cin >> R;
	cout << fixed << setprecision(9) << pi * R * R << endl;
}