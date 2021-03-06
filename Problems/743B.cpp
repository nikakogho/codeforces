#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main()
{
	ll n, k;
	cin >> n >> k;
	//1 3 5 7 9 11 ... -> 1
	//2 6 10 14 18 ... -> 2
	//4 12 20 28   ... -> 3
	//8 24 40 56   ... -> 4
	//...
	//2 ^ (n - 1), 2 ^ (n - 1) + 2 ^ n ...
	short answer = 1;
	while(k % 2 == 0) k /= 2, answer++;
	cout << answer;
}
