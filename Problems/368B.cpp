#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n, m;
	cin >> n >> m;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	set<int> st;
	int ans[n];
	for(int i = n - 1; i >= 0; i--)
	{
		st.insert(arr[i]);
		ans[i] = st.size();
	}
	while(m--)
	{
		int l;
		cin >> l;
		int answer = ans[l - 1];
		cout << answer << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
