#include <iostream>
using namespace std;

void Ntimes()
{
	int counter;
	int num;
	char c;
	cin >> counter;
	for (int i = 0; i < counter; i++)
	{
		cin >> num >> c;
		for (int j = 0; j < num ; j++)
		{
			cout << c << " ";
		}
		cout << endl;
	}

	
}

int main()
{
	Ntimes();
	return 0;
}