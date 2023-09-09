#include <iostream>
using namespace std;

void main()
{
	int size;
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int x;
	int y = 0;
	cin >> x;

	for (int i = 0; i < size; i++)
	{
		if (x == arr[i])
		{
			cout << i << endl;
			y = 1;
			break;
		}
	}
	if (y == 0)
	{
		cout << "-1" << endl;
	}
}