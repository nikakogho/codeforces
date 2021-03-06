#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int big = 1e9;
const int size = 1000;
set<ll> cards;

void makemap()
{
	for(ll h = 1; h < size; h++)
	{
		ll card = h * (3 * h + 1) / 2;
		cards.insert(card);
		if(card > big) break;
	}
}

void solve()
{
	ll n;
	cin >> n;
	int count = 0;
	for(; n > 1; count++)
	{
		ll h = 1;
		for(; h * (h * 3 + 1) / 2 <= n; h++);
		h--;
		n -= h * (h * 3 + 1) / 2;
	}
	cout << count << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//();
	int t; cin >> t; while(t--) 
	solve();
}
