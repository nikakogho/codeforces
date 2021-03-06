#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	cin >> k;
	int answer = 19;
	for(int x = 19; k > 0; x++)
	{
		int a = x;
		int sum = 0;
		do
		{
			sum += a % 10;
			a /= 10;
		}while(a > 0);
		if(sum == 10)
		{
			answer = x;
			k--;
			//cout << answer << " ";
		}
	}
	cout << answer;
}
