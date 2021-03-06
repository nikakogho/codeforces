#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool check(string s, char c1, char c2)
{
	int i = 0;
	int n = s.size();
	for(; i < n - 1; i++) if(s[i] == c1 && s[i + 1] == c2) break;
	for(i += 2; i < n - 1; i++) if(s[i] == c2 && s[i + 1] == c1) return 1;
	return 0;
}

bool abba(string s)
{
	return check(s, 'A', 'B');
}

bool baab(string s)
{
	return check(s, 'B', 'A');
}

void solve()
{
	string s;
	cin >> s;
	string answer = (abba(s) || baab(s)) ? "YES" : "NO";
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
