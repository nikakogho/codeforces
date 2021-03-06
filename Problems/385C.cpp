#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	const int primecount = 40000;
	const int total = 100000 - 1;
	int counts[total + 1];
	for(int i = 0; i <= total; i++) counts[i] = 0;
	set<int> primes;
	int sieve[total + 1];
	sieve[1] = 1;
	for(int i = 2; i <= total; i++) sieve[i] = 0;
	for(int i = 2; i < primecount; i++)
	{
		if(sieve[i] > 0) continue;
		primes.insert(i);
		for(long long j = i * 2; j <= total; j += i) if(sieve[j] == 0) sieve[j] = i;
	}
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if(x == total + 1) x = 10;
		while(x > 1)
		{
			int div = sieve[x];
			counts[div]++;
			if(div == 0)
			{
				//cout << x << " is prime" << endl;
				counts[x]++;
				break;
			}
			else do
			{
				//cout << x << " divided by " << div << endl;
				x /= div;
			}while(sieve[x] == div || x == div);
		}
	}
	int sums[total + 1];
	//sums[1] = 0;
	int sum = 0;
	sums[1] = 0;
	for(int i = 2; i <= total; i++)
	{
		//if(counts[i] > 0)
		//	cout << "count of " << i << " is " << counts[i] << endl;
		sum += counts[i];
		sums[i] = sum;
	}
	int m;
	cin >> m;
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		int ans = sums[r] - sums[l - 1];
		cout << ans << endl;
	}
}
