#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, s;
	cin >> n >> k >> s;
	int answer = pow(10, n - 1);
	int remainder = s % (int)pow(10, n - k);
	answer += remainder;
	cout << answer;
}
