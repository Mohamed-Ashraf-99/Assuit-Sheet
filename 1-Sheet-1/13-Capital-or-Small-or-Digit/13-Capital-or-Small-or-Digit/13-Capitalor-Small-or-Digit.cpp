#include <iostream>
using namespace std;

int main()
{
	char mychar;
	cin >> mychar;

	if (mychar >= 65 && mychar <= 90)
	{
		cout << "ALPHA" << endl;
		cout << "IS CAPITAL" << endl;
	}
	else if (mychar >= 97 && mychar <= 122)
	{
		cout << "ALPHA" << endl;
		cout << "IS SMALL" << endl;
	}
	else
	{
		cout << "IS DIGIT" << endl;
	}

}
