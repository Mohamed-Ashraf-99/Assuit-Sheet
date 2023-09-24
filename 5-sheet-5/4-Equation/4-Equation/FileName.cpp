#include <iostream>
using namespace std;

void Equation()
{
	int x, n;
	int s = 0;
	cin >> x >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			s += (pow(x, 0) - 1) + pow(x, i); 
		}
	}
	cout << s << endl; 
}

int main()
{
	Equation();
	return 0;
}