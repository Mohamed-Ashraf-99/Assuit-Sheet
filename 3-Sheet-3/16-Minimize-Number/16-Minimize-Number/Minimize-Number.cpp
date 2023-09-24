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
	int counter = 0;
	int x = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		counter = 0;
		while (arr[i] % 2 == 0)
		{
			counter++;
			arr[i] /= 2;
		}
		x = min(x, counter); 
	}
	cout << x << endl;  
}