#include <iostream>
using namespace std;

int main()
{
	int num;
	int Max = INT_MIN;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> i;
		if (Max < i)
		{
			Max = i;
		}
	}
	cout << Max << endl;
}