#include <iostream>
using namespace std;

void check()
{
	int min = INT_MAX , max = INT_MIN;
	int counter;
	cin >> counter;
	for (int i = 0; i < counter; i++)
	{
		int num;
		cin >> num; 
		if (min > num)
		{
			min = num; 
		}
		if (max < num)
		{
			max = num;  
		}
	}
	cout << min << " " << max << endl;
}

int main()
{
	check();
	return 0;
}