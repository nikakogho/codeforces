#include <bits/stdc++.h>

using namespace std;

string name1 = "Ashishgup", name2 = "FastestFinger";

string solve()
{
	int n;
	cin >> n;
	if(n == 1) return name2;
	if(n % 2 == 1 || n == 2) return name1;
	if(n % 4 > 0)
	{
		int sqr = sqrt(n);
		int count = 0;
		for(int i = 3; i <= sqr; i += 2)
		{
			if(n % i == 0) 
			{
				n /= i;
				return n == 2 ? name2 : name1;
			}
		}
		return name2;
	}
	int l = log2(n);
	return 1 << l == n ? name2 : name1;
}

int main()
{
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
