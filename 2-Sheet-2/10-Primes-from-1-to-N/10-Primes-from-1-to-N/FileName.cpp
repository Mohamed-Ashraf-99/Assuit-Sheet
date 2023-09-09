#include <iostream>
using namespace std;

int main()
{
	
	int x;
	cin >> x;

	for (int i = 2; i <= x; i++)
	{
		bool y = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				y = 1;
				break;
			}
		}
		if (y == 0)
		{
			cout << i << " ";
		}
	}
}