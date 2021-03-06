#include <bits/stdc++.h>

using namespace std;

const int big = 1e9;

/*
struct Node
{
	int l, r, mid;
	int val;
	Node *left, *right;
	
	Node(int l, int r)
	{
		this->l = l;
		this->r = r;
		val = big;
		mid = (l + r) / 2;
		if(l < r)
		{
			left = new Node(l, mid);
			right = new Node(mid + 1, r);
		}
	}
	
	void insert(int index, int x)
	{
		if(index > r || index < l) return;
		val = min(val, x);
		if(x > mid) right->insert(index, x);
		else if(l < r) left->insert(index, x);
	}
	
	int getval(int L, int R)
	{
		if(l >= L && r <= R) return val;
		int ans = big;
		if(L <= mid && l < r) ans = min(ans, left->getval(L, mid));
		if(R > mid && l < r) ans = min(ans, right->getval(mid + 1, R));
		return ans;
	}
};

*/

int main()
{
	ios_base::sync_with_stdio(0);
	int n, s, l;
	cin >> n >> s >> l;
	int arr[n + 1], g[n + 1];
	int minimum = big, maximum = -big;
	int borderl = 1;
	multiset<int> ms;
	g[0] = 1; //may be unnecessary
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		arr[i] = x;
		ms.insert(x);
		minimum = min(minimum, x);
		maximum = max(maximum, x);
		while(maximum - minimum > s)
		{
			ms.erase(ms.find(arr[borderl++]));
			minimum = *ms.begin();
			maximum = *(--ms.end());
		}
		g[i] = borderl - 1;
	}
	int f[n + 1];
	f[0] = 0;
	ms.clear();
	for(int k = 0, i = 1; i <= n; i++)
	{
		if(i - l >= 0) ms.insert(f[i - l]);
		for(; k <= i - l && k < g[i]; k++) ms.erase(ms.find(f[k]));
		f[i] = ms.empty() ? big : (*ms.begin() + 1);
	}
	int ans = f[n];
	if(ans >= big) ans = -1;
	cout << ans;
}
