#include <iostream>
using namespace std;

void Prime()
{
	int counter;
	cin >> counter;
	for (int i = 0; i < counter; i++)
	{
		bool x = 0;
		long long num;
		cin >> num;

		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				x = 1;
			}
		}
		if (x == 1)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}

int main()
{
	Prime();
	return 0;
}