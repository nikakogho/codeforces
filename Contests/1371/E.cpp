#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 2000;
int n, p;
int arr[N];

bool func(int x)
{
	ll counts[n];
	for(int i = 0; i < n; i++) counts[i] = 0;
	for(int i = 0; i < n; i++)
	{
		int needs = max(0, arr[i] - x);
		if(needs < n) counts[needs]++;
		else return 0; // maybe 0
	}
	for(ll count = 0, i = 0; i < n; i++)
	{
		count += counts[i];
		if(count % p == 0) return 0;
		count--;
	}
	return 1;
}

void solve()
{
	cin >> n >> p;
	int last = 0;
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	last = arr[n - 1];
	vector<int> ans;
	for(int x = 1; x <= last; x++)
	{
		//bool failed = 0;
		//for(int i = 0; i < n; i++) if(arr[i] > x + i) { failed = 1; break; }
		//if(failed) continue;
		bool fx = func(x);
		if(fx) ans.push_back(x);
	}
	cout << ans.size() << endl;
	for(int x : ans) cout << x << " ";
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
