#include <iostream>
using namespace std;

void main()
{
	long long X, Y;
	cin >> X >> Y;
	if (X % Y == 0 || Y % X == 0)
	{
		cout << "Multiples" << endl;
	}
	else
	{
		cout << "No Multiples" << endl;
	}
}