#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long long nOdd = 0;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			nOdd += x % 2;
		}
		long long nEven = n - nOdd, m, mOdd = 0;
		cin >> m;
		for(int i = 0; i < m; i++)
		{
			int x;
			cin >> x;
			mOdd += x % 2;
		}
		long long mEven = m - mOdd;
		long long answer = nOdd * mOdd + nEven * mEven;
		cout << answer << endl;
	}	
}
