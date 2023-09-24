#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int* arr = new int [size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	int Max = INT_MIN;
	int Min = INT_MAX; 

	int max_pos;

	for (int i = 0; i < size; i++)
	{
		if (Max < arr[i])
		{
			Max = arr[i];
			max_pos = i; 
		}
	}

	int min_pos; 
	for (int i = 0; i < size; i++)
	{
		
		if (Min > arr[i])
		{
			Min = arr[i]; 
			min_pos = i;
		}
	}

	int X = arr[max_pos];
	arr[max_pos] = arr[min_pos];
	arr[min_pos] = X;
	
	for (int i = 0; i < size; i++)
	{ 
		cout << arr[i] << " "; 
	}
}