#include <iostream>
using namespace std;

int main()
{
	int num;
	int Max = INT_MIN;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int num;
		cin >> num; 
		if (Max < num)  
		{
			Max = num; 
		}
	}
	cout << Max << endl;
}