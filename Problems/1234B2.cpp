#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	deque<string> v;
	int size = 0;
	while(n--)
	{
		string x;
		cin >> x;
		if(find(v.begin(), v.end(), x) == v.end())
		{
			v.push_front(x);
			size++;
			if(size == k) break;
		}
	}
	if(size == k)
	while(n--)
	{
		string x;
		cin >> x;
		if(find(v.begin(), v.end(), x) == v.end())
		{
			v.pop_back();
			v.push_front(x);
		}
	}
	cout << size << endl;
	for(string e : v) cout << e << " ";
}
