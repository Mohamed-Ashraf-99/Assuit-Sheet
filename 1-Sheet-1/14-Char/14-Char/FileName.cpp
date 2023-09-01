#include <iostream>
using namespace std;

int main()
{
	char X, result;
	cin >> X;
	int A = X;
	if (A >= 97 && A <= 122)
	{
		A = A - 32;
		result = A;
		cout << result << endl;
	}
	else if (A >= 65 && A <= 90)
	{
		A = A + 32;
		result = A;
		cout << result << endl;
	}
}