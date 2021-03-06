#include <bits/stdc++.h>

using namespace std;

int n, m;
const int N = 2e5 + 1;
const int M = 3e5;
//pair<int, int> ans[M];
vector<pair<int, int>> ans(M);
int anssize = 0;
set<int> paths[N];
bool explored[N];
int costs[N];
int bridgedetect[N]; //one way path
bool solved = 1;

void dfs(int vert, int last = 0) //, string space = "")
{
	//cout << space << "Exploring " << vert << endl;
	explored[vert] = 1;
	bridgedetect[vert] = costs[vert] = costs[last] + 1;
	for(int to : paths[vert])
	{
		if(!solved) return;
		if(to == last) continue;
		if(costs[vert] < costs[to]) continue;
		if(explored[to]) bridgedetect[vert] = min(costs[to], bridgedetect[vert]);
		else dfs(to, vert);
		bridgedetect[vert] = min(bridgedetect[to], bridgedetect[vert]);
		ans[anssize++] = { vert, to };
	}
	if(last && bridgedetect[vert] == costs[vert]) solved = 0;
}

bool solve()
{
	for(int i = 0; i < m; i++)
	{
		int l, r;
		cin >> l >> r;
		if(l > r) swap(l, r);
		//ans[i] = { l, r };
		paths[l].insert(r);
		paths[r].insert(l);
	}
	for(int i = 0; i <= n; i++) explored[i] = costs[i] = bridgedetect[i] = 0;
	dfs(1);
	return solved;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin >> n >> m;
	if(solve())
	{
		cout << endl;
		for(int i = 0; i < m; i++) cout << ans[i].first << " " << ans[i].second << endl;
	}
	else cout << 0;
}
