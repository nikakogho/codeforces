#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	//1 + 1/2 + 1/3 + 1/4 + ... + 1/n
	double answer = 0;
	for(int x = 1; x <= n; x++) answer += 1.0 / x;
	cout << answer;
}
