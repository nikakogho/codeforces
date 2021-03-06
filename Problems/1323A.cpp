#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--)
	{
		short n;
		cin >> n;
		short arr[n];
		for(short i = 0; i < n; i++) cin >> arr[i];
		if(arr[0] % 2 == 0) cout << "1\n1\n";
		else if(n == 1) cout << "-1\n";
		else if(arr[1] % 2 == 0) cout << "1\n2\n";
		else cout << "2\n1 2\n";
	}
}
