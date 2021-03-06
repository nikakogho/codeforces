#include <bits/stdc++.h>

using namespace std;

bool cross(const set<int>& a, const set<int>& b)
{
	for(int x : a) if(b.find(x) != b.end()) return true;
	return false;
}

void unite(set<int>& a, const set<int>& b)
{
	for(int e : b) a.insert(e);
}

int main()
{
	int n, m;
	cin >> n >> m;
	int answer = 0;
	vector<set<int>> v;
	while(n--)
	{
		int count;
		cin >> count;
		if(count == 0)
		{
			answer++;
			continue;
		}
		set<int> s;
		while(count--)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		for(int i = v.size() - 1; i >= 0; i--)
		{
			if(cross(s, v[i]))
			{
				unite(s, v[i]);
				v.erase(v.begin() + i);
			}
		}
		v.push_back(s);
	}
	if(v.size() > 0) answer += v.size() - 1;
	cout << answer;
}
