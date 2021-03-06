#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int a, b, c, n;
		cin >> a >> b >> c >> n;
		int arr[] = { a, b, c };
		sort(arr, arr + 3);
		int cost = arr[2] * 2 - arr[1] - arr[0];
		n -= cost;
		if(n >= 0 && n % 3 == 0) cout << "YES\n";
		else cout << "NO\n";  
	}
}
