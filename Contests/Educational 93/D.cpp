#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve()
{
	ll ans = 0;
	int r, g, b;
	cin >> r >> g >> b;
	priority_queue<int> R, G, B;
	for(int i = 0; i < r; i++)
	{
		int x;
		cin >> x;
		R.push(x);
	}
	for(int i = 0; i < g; i++)
	{
		int x;
		cin >> x;
		G.push(x);
	}
	for(int i = 0; i < b; i++)
	{
		int x;
		cin >> x;
		B.push(x);
	}
	while((R.size() > 0) + (G.size() > 0) + (B.size() > 0) > 1)
	{
		if(R.size())
		{
			if(G.size())
			{
				if(B.size())
				{
					if(R.top() > G.top())
					{
						if(G.top() > B.top())
						{
							ans += G.top() * R.top();
							G.pop(); 
							R.pop();
						}
						else
						{
							ans += B.top() * R.top();
							B.pop(); 
							R.pop();
						}
					}
					else if(R.top() > B.top())
					{
						ans += G.top() * R.top();
						G.pop(); 
						R.pop();
					}
					else
					{
						ans += G.top() * B.top();
						G.pop(); 
						B.pop();
					}
				}
				else
				{
					ans += G.top() * R.top();
					G.pop(); 
					R.pop();
				}
			}
			else
			{
				ans += B.top() * R.top();
				B.pop(); 
				R.pop();
			}
		}
		else
		{
			ans += G.top() * B.top();
			G.pop();
			B.pop();
		}
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--)
	//solve();
	cout << solve() << endl;
}
