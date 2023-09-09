#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int X = INT_MAX;
	int eq;
	while (t--)
	{
		int size;
		cin >> size;
		int* arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		for (int i = 1; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				eq = arr[i] + arr[j] + j - i;
				if (eq < X)
				{
					X = eq;
				}

			}
		}
	}
	cout << X << endl;
	

}