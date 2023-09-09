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

	int n = arr[0];
	int pos;

	for (int i = 0; i < size; i++)
	{
		if (n >= arr[i])
		{
			 n = arr[i];
			 pos = i;
		}
	}
	cout << n << " " << pos + 1 << endl;
}