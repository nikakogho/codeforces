#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	string s;
	cin >> n >> s;
	int sub[n];
	//bool subs[n];
	int size = 0;
	set<int> zeroes, ones;
	for(int i = 0; i < n; i++)
	{
		bool zero = s[i] == '0';
		set<int>* needing = zero ? &zeroes : &ones;
		set<int>* other = zero ? &ones : &zeroes;
		if(needing->size() == 0)
		{
			size++;
			sub[i] = size;
		}
		else
		{
			int left = *(needing->begin());
			needing->erase(needing->begin());
			sub[i] = left;
		}
		other->insert(sub[i]);
	}
	cout << size << endl;
	for(int i = 0; i < n; i++) cout << sub[i] << " ";
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
}
