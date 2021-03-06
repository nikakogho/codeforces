#include <bits/stdc++.h>

using namespace std;

const int N = 200001;
int arr[N];

pair<int, int> query(int l, int r)
{
	cout << "? " << l << " " << r << endl;
	int x, f;
	cin >> x >> f;
	return { x, f };
}

map<int, int> queries;

int determine(int l, int r)
{
	if(l > r) return l - 1;
	auto p = query(l, r);
	int x = p.first;
	int f = p.second;
	if(queries.find(x) != queries.end())
	{
		int end = r - f + queries[x];
		for(int j = end - queries[x] + 1; j <= end; j++) arr[j] = x;
		queries.erase(queries.find(x));
		determine(l, r - f);
		return end;
	}
	else
	{
		queries[x] = f;
		int j = l;
		while(queries.find(x) != queries.end())
			j = determine(j, j + f - 1) + 1;
		return determine(j, r);
	}
}

void solve()
{
	int n;
	cin >> n;
	determine(1, n);
	cout << "!";
	for(int i = 1; i <= n; i++) cout << " " << arr[i];
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--)
	solve();
}
