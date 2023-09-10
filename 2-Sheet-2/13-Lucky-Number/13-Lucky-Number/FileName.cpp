#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int ctr = 0;
	cin >> a >> b;
	for (int i = min(a, b); i <= max(a, b); i++)
	{
		bool y = 0;
		int n = i;
		while (n != 0)
		{
			short x = n % 10; 
			n /= 10;
			if (x != 7 && x != 4)
			{
				y = 1;
			}
		}
		if (y == 0)
		{
			cout << i << " "; 
			ctr++;
		}
	}
	if (ctr == 0)
	{
		cout << "-1" << endl;
	}
}