#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, k;
	cin >> n >> k;
	deque<int> v;
	while(n--)
	{
		int x;
		cin >> x;
		if(find(v.begin(), v.end(), x) == v.end())
		{
			v.push_front(x);
			if(v.size() == k) break;
		}
	}
	//if(v.size() == k) n--;
	while(n--)
	{
		int x;
		cin >> x;
		if(find(v.begin(), v.end(), x) == v.end())
		{
			v.pop_back();
			v.push_front(x);
		}
	}
	cout << v.size() << endl;
	for(int e : v) cout << e << " ";
}
