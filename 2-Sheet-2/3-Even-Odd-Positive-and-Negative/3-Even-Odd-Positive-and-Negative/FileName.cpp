#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int Even = 0;
	int Odd = 0;
	int Pos = 0;
	int Neg = 0;

	for (int i = 1; i <= N; i++)
	{
		cin >> i;
		if (i % 2 == 0 )
		{
			Even++;
		}
		else
		{
			Odd++;
		}

		if (i > 0)
		{
			Pos++;
		}
		else if (i < 0)
		{
			Neg++;
		}
	}
	cout << "Even: " << Even << endl;
	cout << "Odd: " << Odd << endl;
	cout << "Positive: " << Pos << endl;
	cout << "Negative: " << Neg << endl;
}