#include <iostream>
using namespace std;

int main()
{
	bool x = true;
	int num;
	cin >> num;

	for (int i = 2; i < num ; i++)
	{
		if (num % i == 0)
		{
			x = true;
		}
	}
	if (x = true) 
	{
		cout << "Not Prime" << endl;
	}
	else
	{
		cout << "Prime" << endl;
	}
}