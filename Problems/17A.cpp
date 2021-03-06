#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, k;
	cin >> n >> k;
	short count = 0;
	int sieve[1001];
	for(int i = 1; i <= 1000; i++) sieve[i] = i;
	for(int i = 2; i <= 1000; i++)
	{
		if(sieve[i] != i) continue;
		for(int j = i * 2; j <= n; j += i) if(sieve[j] == j) sieve[j] = i;
	}
	set<int> primes;
	for(int i = 2; i <= 1000; i++) if(sieve[i] == i) primes.insert(i);
	for(int x = 2; x <= n; x++)
	{
		auto it = primes.find(x);
		if(it == primes.end()) continue;
		it--;
		for(auto it1 = primes.begin(), it2 = primes.begin(); it1 != it; it1++)
		{
			it2++;
			if(*it1 + *it2 + 1 == x)
			{
				count++;
				break;
			}
		}
	}
	string answer = count >= k ? "YES" : "NO";
	cout << answer;
}
