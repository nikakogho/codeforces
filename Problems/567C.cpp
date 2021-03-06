#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	long long arr[n];
	long long answer = 0;
	map<int, int> left;
	map<long long, int> right;
	for(int i = 0; i < n - 1; i++) 
	{
		int x;
		cin >> x;
		arr[i] = x;
		auto it = left.find(x);
		if(it == left.end()) left.insert( { x, 1 } );
		else it->second++;
	}
	auto it = arr + n - 2;
	long long sqr = k * k;
	cin >> arr[n - 1];
	if(arr[n - 1] % sqr == 0) right.insert( { arr[n - 1], 1 } );
	for(auto mid = arr + n - 2; mid > arr; mid--)
	{
		long long x = *mid;
		left[x]--;
		if(x % k > 0) continue;
		long long x3 = x * k;
		long long x1 = x / k;
		auto r = right.find(x3);
		auto l = left.find(x1);
		if(r != right.end() && l != left.end()) answer += (long long)r->second * l->second;
		if(x % sqr == 0)
		{
			auto itx = right.find(x);
			if(itx == right.end()) right.insert( { x, 1 } );
			else itx->second++;
		}
	}
	cout << answer;
}
