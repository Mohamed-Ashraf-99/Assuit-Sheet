#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	while (x--)
	{
		int N; 
		cin >> N; 
		for (int i = N; i > 0; i /= 10)
		{
			cout << i % 10 << " ";
		}
	}
}