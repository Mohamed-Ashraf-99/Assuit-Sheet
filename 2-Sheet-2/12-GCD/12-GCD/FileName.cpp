#include <iostream>
using namespace std;

int main()
{
	int x, y;
	int z = 0;
	cin >> x >> y;

	for (int i = 1; i <= min(x, y); i++)
	{
		if (x % i == 0 && y % i == 0 && i <= min(x, y))
		{
			z = i;
		}
	}
	cout << z << endl; 
}