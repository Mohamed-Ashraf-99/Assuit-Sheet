#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int x = 1;
	bool y = 0;

	for (int i = 0, j = size - 1; i < size && j >= 0; i++, j--)
	{
		if (arr[i] != arr[j])
		{
			y = 1;
			break;
		}
		x++;
	}
	if (y == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}


}