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

	for (int i = 0; i < size; i++)
	{
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

	int y = arr[0];
	int z = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == y) 
		{
			z++;
			
		}
	}

	if (z%2 == 0)  
	{
		cout << "Unlucky" << endl;
	}
	else
	{
		cout << "Lucky" << endl; 
	}
}