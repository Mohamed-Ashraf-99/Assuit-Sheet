#include <iostream>
#include <string> 
using namespace std;

int main()
{
	string s;
	int n;
	int x;
	cin >> s >> n;
	for (int i = 0; i < 5; i++)
	{
		cin >> x;
		for (int i = 0; i < x; i++)
		{
			cout << s ;
		}
		cout << endl;
	}
}