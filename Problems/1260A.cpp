#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a, b;
		cin >> a >> b;
		if(a > b) a = b;
		long long c = b / a;
		long long answer = c * c * a + (b % a) * (2 * c + 1);
		cout << answer << endl;
	}	
}
