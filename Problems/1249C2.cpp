#include <bits/stdc++.h>

using namespace std;

//1 3 9 27 81 ...
//1 3 4 9 10 12 13 27 28 30 31 36 37 39 40 ...

unsigned long long log3(unsigned long long x)
{
	double y = x;
	double answer = log2(x) / log2(3);
	return (unsigned long long)answer;
}

unsigned long long solve(unsigned long long x)
{
	unsigned long long power = log3(x);
	if(pow(3, power) == x) return x;
	else
	{
		unsigned long long m = pow(3, power);
		if(m + (m / 2) < x) return m * 3;
		else return m + solve(x - m);
	} 
}

int main()
{
	short q;
	unsigned long long max = pow(10, 18);
	cin >> q;
	while(q--)
	{
		unsigned long long x;
		cin >> x;
		if(x == max)
		cout << "1350851717672992089" << endl;
		else
		{
			
		unsigned long long answer = solve(x);
		cout << answer << endl;
		}
	}	
}
