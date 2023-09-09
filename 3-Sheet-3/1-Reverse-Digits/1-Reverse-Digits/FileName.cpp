#include <iostream>
using namespace std;

void main()
{
	int x;
	int y = 0;
	cin >> x;
	for (int i = x; i > 0; i /= 10)
	{
		y = (y * 10) + (i % 10);
	}
	cout << y << endl;
}