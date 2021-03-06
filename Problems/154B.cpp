#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int sieve[n + 1];
	bool states[n + 1];
	for(int i = 1; i <= n; i++) states[i] = 0, sieve[i] = i;
	for(int i = 2; i <= n; i++)
	{
		if(sieve[i] != i) continue;
		for(int j = i * 2; j <= n; j += i) 
			if(sieve[j] == j) sieve[j] = i;
	}
	sieve[1] = -1;
	//for(int i = 1; i <= n; i++) cout << sieve[i] << " ";
	set<int> actives;
	map<int, int> enablers;
	while(m--)
	{
		char c;
		int x;
		cin >> c >> x;
		if(c == '+' && states[x]) cout << "Already on\n";
		else if(c == '-' && !states[x]) cout << "Already off\n";
		else if(c == '+')
		{
			int old = x;
			bool works = true;
			set<int> primes;
			while(sieve[x] >= 0)
			{
				int prime = sieve[x];
				auto it = actives.find(prime);
				if(it != actives.end())
				{
					cout << "Conflict with " << enablers[prime] << endl;
					works = false;
					break;
				}
				x /= prime;
				primes.insert(prime);
			}
			if(works)
			{
				cout << "Success\n";
				for(int prime : primes)
				{
					actives.insert(prime);
					enablers[prime] = old;
				}
			}
			states[old] = works;
		}
		else
		{
			states[x] = 0;
			cout << "Success\n";
			while(sieve[x] >= 0)
			{
				int prime = sieve[x];
				x /= prime;
				actives.erase(prime);
			}
		}
	}
}
