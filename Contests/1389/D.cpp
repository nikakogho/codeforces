#include <bits/stdc++.h>

using namespace std;

#define ll long long

//10 6246
//137 548
//61 945

int solve()
{
	ll n, k;
	cin >> n >> k;
	ll l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if(l1 > l2)
	{
		swap(l1, l2);
		swap(r1, r2);
	}
	ll intersize = max(0ll, min(r1, r2) - l2);
	//cout << "Inter size is " << intersize << endl;
	if(n * intersize >= k) return 0;
	ll leftest = l1;
	ll rightest = max(r1, r2);
	ll segsize = rightest - leftest;
	segsize -= intersize; //more like segment potential
	ll achievecost = l2 - l1 + rightest - min(r1, r2);
	ll dist = max(0ll, l2 - r1);
	//cout << "Fill cost is " << achievecost << endl;
	k -= n * intersize;
	ll fullsegs = min(n, k / segsize);
	//cout << "There are " << fullsegs << " full segments" << endl;
	ll cost = achievecost * fullsegs;
	k -= segsize * fullsegs;
	//cout << "Still need " << k << endl;
	ll cost1 = fullsegs < n ? (dist + k) : 1e9;
	ll cost2 = 2 * k;
	cost += min(cost1, cost2);
	return cost;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	cout << solve() << endl;
}
