#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	pair<long long, long long> arr[n];
	for(int i = 0; i < n; i++)
	{
		int x, h;
		cin >> x >> h;
		arr[i] = { x, h };
	}
	if(n < 3) cout << n;
	else
	{
		int answer = 2;
		auto end = arr + n - 1;
		long long last = arr[0].first;
		for(auto it = arr + 1; it < end; it++)
		{
			auto p = *it;
			long long x = p.first;
			long long h = p.second;
			if(x - h > last)
			{
				last = x;
				//cout << "segment [ " << (x - h) << " ; " << x << " ]" << endl;
				answer++;
			}
			else if((*(it + 1)).first - x > h)
			{
				answer++;
				//cout << "segment [ " << x << " ; " << (x + h) << " ]" << endl;
				last = x + h;
	 		}
			else last = x;
		}
		cout << answer << endl;
	}
}
