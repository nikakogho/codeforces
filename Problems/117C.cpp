#include <bits/stdc++.h>

using namespace std;

const short N = 5001;
//set<short> paths[N];
string roads[N];
bool visited[N];
short n;

bool found = 0;

void dfs(short last, short vert)
{
	if(found) return;
	visited[vert] = 1;
	for(int i = 1; i <= n; i++)
	{
		if(found) return;
		if(roads[vert][i] == '0') continue;
		if(roads[i][last] == '1')
		{
			cout << last << " " << vert << " " << i;
			found = 1;
			return;
		}
		if(!visited[i]) dfs(vert, i);
	}
}

void solve()
{
	cin >> n;
	for(int i = 0; i <= n; i++) for(int j = 0; j <= n; j++) roads[i] += '0';
	visited[0] = 0;
	for(int y = 1; y <= n; y++)
	{
		visited[y] = 0;
		string s;
		cin >> s;
		for(int i = 1; i <= n; i++) roads[y][i] = s[i - 1];
	}
	for(int i = 1; i <= n; i++) if(!found) dfs(0, i);
	if(!found) cout << -1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	solve();
}
