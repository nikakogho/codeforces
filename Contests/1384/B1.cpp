#include <bits/stdc++.h>

using namespace std;

const int size = 101;
int n, k, l;
int d[size];
int p[size * 2];
bool counted[size][2 * size];
bool dp[size][2 * size];

void setup()
{
	for(int i = 0; i < size; i++) for(int j = 0; j < 2 * size; j++) dp[i][j] = counted[i][j] = 0;
	for(int i = 0; i < k; i++) p[i] = i;
	for(int i = k; i < 2 * k; i++) p[i] = 2 * k - i;
}

bool solvefor(int x, int t, int tick = 0)
{
	if(x > n) return 1;
	if(tick == 2 * k) return 0;
	if(t == 2 * k) t = 0;
	int depth = d[x] + p[t];
	if(depth > l) return 0;
	if(!counted[x][t])
	{
		int tnext = (t + 1) % (2 * k);
		dp[x][t] = solvefor(x + 1, t + 1) || solvefor(x, t + 1, tick + 1);
		counted[x][t] = 1;
		if(x == n) 
		{
			//cout << "Depth is " << depth << endl;
			//cout << "Getting to " << x << " in time " << t << " is " << (dp[x][t] ? "possible" : "impossible") << endl;
		}
	}
	return dp[x][t];
}

string solve()
{
	cin >> n >> k >> l;
	setup();
	d[0] = -k;
	bool nope = 0;
	for(int i = 1; i <= n; i++) 
	{
		int x;
		cin >> x;
		if(x - k > l) nope = 1;
		d[i] = x;
	}
	if(nope) return "No";
	if(solvefor(0, 0)) return "Yes";
	return "No";
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
