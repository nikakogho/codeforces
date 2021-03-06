#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	set<int> s;
	while(n--)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	if(s.size() == 1) cout << "NO";
	else 
	{
		auto it = s.begin();
		it++;
		cout << *it;
	}
}
