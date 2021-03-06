#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int answer;
	if(m * 2 <= n) answer = m + 1;
	else answer = m - 1;
	if(answer == 0) answer = 1;
	cout << answer;	
}
