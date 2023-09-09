#include <iostream>
using namespace std;

int main()
{
	int F;
	int N;
	int Factorial = 1;
	cin >> N; 
	while (N--)
	{
		cin >> F;
		for (int i = F; i > 1; i--)
		{
			Factorial = Factorial * i; 
		}
		cout << Factorial << endl;
		Factorial = 1;
	}
}