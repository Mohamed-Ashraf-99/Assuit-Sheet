#include <iostream>
using namespace std;

void main()
{
	long long A, B, C;
	cin >> A >> B >> C;
	if (A > B && B > C)
	{
		cout << C << " " << A << endl;
	}
	else if (A > C && C > B)
	{
		cout << B << " " << A << endl;
	}
	else if (B > A && A > C)
	{
		cout << C << " " << B << endl;
	}  
	else if (B > C && C > A) 
	{
		cout << A << " " << B << endl;
	}
	else if (C > A && A > B)
	{
		cout << B << " " << C << endl;
	}
	else if (C > B && B > A)
	{
		cout << A << " " << C << endl;
	}
}