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

	int y;

	for (int i = 0; i < size; i++)
	{
		y = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int x;
				x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}