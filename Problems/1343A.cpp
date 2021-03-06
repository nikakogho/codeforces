#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll> powers;

int solve()
{
	int n;
	cin >> n;
	//n = x * (2 ^ k - 1) where k > 0
	for(ll power : powers) if(power <= n && n % power == 0) return n / power;
	return -1;
}

int main()
{
	ll end = pow(2, 32);
	for(ll power = 4; power < end; power *= 2) powers.push_back(power - 1);
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
