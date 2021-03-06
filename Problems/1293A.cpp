#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--)
	{
		int n, s, k;
		cin >> n >> s >> k;
		set<int> a;
		int bottom = s > 1000 ? (s - 1000) : 1;
		int top = s > 1000 ? (s + 1000) : 1001;
		if(top > n) top = n;
		for(int x = bottom; x <= top; x++) a.insert(x);
		while(k--)
		{
			int x;
			cin >> x;
			a.erase(x);
		}
		//for(int e : a) cout << e << " ";
		//cout << endl;
		auto it = a.lower_bound(s);
		int answer = 1000;
		if(it != a.end()) answer = *it - s;
		if(it != a.begin())
		{	
			it--;
			int dist2 = s - *it;
			if(dist2 < answer) answer = dist2;
		}
		cout << answer << endl;
	}
}
