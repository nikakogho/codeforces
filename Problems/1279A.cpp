#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		long long r, g, b;
		cin >> r >> g >> b;
		bool works = r < g + b + 2 && b < r + g + 2 && g < r + b + 2;
		string answer = works ? "Yes" : "No";
		cout << answer << endl;
	}
}
