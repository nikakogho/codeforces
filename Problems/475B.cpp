#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;
	string h, v;
	cin >> h >> v;
	bool a = h[0] == '<' ^ v[0] == '^';
	bool b = h[n - 1] == '>' ^ v[0] == '^';
	bool c = h[0] == '<' ^ v[m - 1] == 'v';
	bool d = h[n - 1] == '>' ^ v[m - 1] == 'v';
	string answer = (a && b && c && d) ? "YES" : "NO";
	cout << answer;
}
