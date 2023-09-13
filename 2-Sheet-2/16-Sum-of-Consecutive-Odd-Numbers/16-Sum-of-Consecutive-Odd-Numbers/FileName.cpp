#include <iostream>
using namespace std;

int main()
{
	int counter;
	cin >> counter;
	for (int i = 0; i < counter; i++)
	{
		int x, y;
		cin >> x >> y;
		int sum = 0;
		for (int j = min(x, y) + 1; j < max(x, y); j++)
		{
			if (j % 2 != 0)
			{
				sum += j;
			}
		}
		cout << sum << endl;
	}
}