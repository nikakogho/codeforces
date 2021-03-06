#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n;
	cin >> n;
	ll damage = 0;
	multiset<int> fire;
	multiset<int> light;
	int f = 0, l = 0;
	while(n--)
	{
		bool islight;
		int val;
		cin >> islight >> val;
		if(islight)
		{
			if(val)
			{
				light.insert(val);
				damage += val;
				if(l < f) damage += *(fire.begin() + l);
				l++;
			}
			else 
			{
				light.erase(light.find(-val));
				l--;
			}
		}
		else
		{
			if(val)
			{
				fire.insert(val);
				f++;
			}
			else
			{
				fire.erase(fire.find(-val));
				f--;
			}
		}
		cout << damage << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--)
	solve();
	//cout << solve() << endl;
}
