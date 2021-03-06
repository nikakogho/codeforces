#include <bits/stdc++.h>

using namespace std;

int main()
{
	const int POWERS = 30;
	array<int, POWERS> pows;
	int x = 1;
	for(int i = 0; i < POWERS; i++)
	{
		x *= 2;
		pows[i] = x;
	}
	int n;
	cin >> n;
	multiset<int> arr;
	for(int i = 0; i < n; i++) 
	{
		cin >> x;
		arr.insert(x);
	}
	long long total = 0;
	int last = 0;
	long long count = 0;
	for(auto it = arr.begin(); it != arr.end(); it++)
	{
		x = *it;
		if(x == last) total += count;
		else
		{
			last = x;
			count = 0;
			for(int p : pows)
			{
				int seek = p - x;
				if(seek == x) count--;
				count += arr.count(seek);
			}
			total += count;
		}
	}
	total /= 2;
	cout << total;
}
