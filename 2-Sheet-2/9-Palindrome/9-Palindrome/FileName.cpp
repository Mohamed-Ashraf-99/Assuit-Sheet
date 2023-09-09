#include <iostream>
using namespace std;

int main()
{
	int y = 0;
	int num;
	cin >> num;
	for (int i = num; i > 0; i /= 10)
	{
		y = (y * 10) + (i % 10);
	}
	if (num == y)
	{
		cout << y << endl;
		cout << "YES" << endl;
	}
	else
	{
		cout << y << endl;
		cout << "NO" << endl;
	}
}