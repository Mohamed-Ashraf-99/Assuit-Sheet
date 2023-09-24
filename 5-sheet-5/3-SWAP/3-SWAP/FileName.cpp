#include <iostream>
using namespace std;

void swap(int a, int b) 
{
	cout << b << " " << a << endl;
}

int main()
{
	int x, y;
	cin >> x >> y;
	swap(x, y);
	return 0;
}