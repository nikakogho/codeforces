#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a = n / k;
		int sum = a * k;
		int rem = n - sum;
		if(rem > k / 2) rem = k / 2;
		sum += rem;
		cout << sum << endl;
	}
}
