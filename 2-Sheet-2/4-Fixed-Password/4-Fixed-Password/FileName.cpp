#include <iostream>
using namespace std;

int main()
{
	int Pass;
	while (true)
	{
		cin >> Pass;
		if (Pass == 1999)
		{
			cout << "Correct" << endl;
			break;
		}
		else
		{
			cout << "Wrong" << endl;
		}
	}
}