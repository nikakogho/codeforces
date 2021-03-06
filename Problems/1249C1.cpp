#include <bits/stdc++.h>

using namespace std;

//1 3 9 27 81 ...
//1 3 4 9 10 12 13 27 28 30 31 36 37 39 40 ...

int log3(int x)
{
	double y = x;
	double answer = log2(x) / log2(3);
	return (int)answer;
}

int solve(int x)
{
	int power = log3(x);
	if(pow(3, power) == x) return x;
	else
	{
		int m = pow(3, power);
		if(m + (m / 2) < x) return m * 3;
		else return m + solve(x - m);
	} 
}

int main()
{
	short q;
	cin >> q;
	while(q--)
	{
		int x;
		cin >> x;
		int answer = solve(x);
		cout << answer << endl;
	}	
}
