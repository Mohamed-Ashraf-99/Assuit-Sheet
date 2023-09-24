#include <iostream>
using namespace std;

void print(int a)
{
	for (int i = 1; i <= a; i++)
	{
		cout << i << " ";
	}
}

int main()
{
	int X;
	cin >> X;
	print(X);
	return 0;
}