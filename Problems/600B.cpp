#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	int A[n];
	for(int i = 0; i < n; i++) cin >> A[i];
	sort(A, A + n);
	while(m--)
	{
		int b;
		cin >> b;
		int l = 0, r = n;
		while(r - l > 1)
		{
			int i = (l + r) / 2;
			if(A[i] > b) r = i - 1;
			else l = i;
		}
		while(l < n && A[l] <= b) l++;
		int answer = l;
		cout << answer << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	solve();
}
