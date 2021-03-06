#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, k;
	cin >> n >> k;
	short a[n];
	short indices[k];
	short b[k];
	short i = 0;
	for(short x = 0; x < n; x++)
	{
		cin >> a[x];
		if(a[x] == 0)
		{
			indices[i] = x;
			i++;
		}
	}
	for(i = 0; i < k; i++) cin >> b[i];
	sort(b, b + k);
	reverse(b, b + k);
	for(i = 0; i < k; i++) a[indices[i]] = b[i];
	string answer = "No";
	for(i = 1; i < n; i++) 
	{
		if(a[i] <= a[i - 1])
		{
			answer = "Yes";
			break;
		}
	}
	cout << answer;
}
