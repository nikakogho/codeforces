#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> odds, evens;
	while(n--)
	{
		int x;
		cin >> x;
		if(x % 2 == 0) evens.push_back(x);
		else odds.push_back(x);
	}
	int size1 = odds.size(), size2 = evens.size();
	if(size1 > size2)
	{
		sort(odds.begin(), odds.end());
		n = size1 - size2 - 1;
		long long sum = 0;
		for(int i = 0; i < n; i++) sum += odds[i];
		cout << sum;
	}
	else
	{
		sort(evens.begin(), evens.end());
		n = size2 - size1 - 1;
		long long sum = 0;
		for(int i = 0; i < n; i++) sum += evens[i];
		cout << sum;
		
	}
}
