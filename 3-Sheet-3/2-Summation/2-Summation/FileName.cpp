#include <iostream>
using namespace std;

void main()
{
	int size;
	long long sum = 0;
	cin >> size;
	long long arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	
	cout << sum << endl; 
	
}