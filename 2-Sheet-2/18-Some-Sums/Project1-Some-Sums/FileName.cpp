#include <iostream>
using namespace std;

int main()
{
	int N, A, B;
	cin >> N >> A >> B;
	int T_Sum = 0;
	for (int i = 1 ;i<= N; i++) 
	{
		int sum = 0;
		int n = i;
		while (n!=0)
		{
			sum += n % 10;
			n /= 10;
		}
		if(sum >= A &&sum<= B)
		{
			T_Sum += i;
		}
	}
	cout << T_Sum << endl; 
}