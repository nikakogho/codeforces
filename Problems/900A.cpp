#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int left = 0, right = 0;
	while(n--)
	{
		int x, y;
		cin >> x >> y;
		if(x > 0) right++;
		else left++;
	}
	if(left > 1 && right > 1) cout << "No";
	else cout << "Yes";
}
