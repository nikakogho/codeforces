#include <bits/stdc++.h>

using namespace std;

#define Modulo 1000000007
#define ll long long

const int size = 2e6 + 7;
int arr[size];

void fill()
{
	ll a = 1, b = 0, c = 0;
	for(int i = 2; i < size; i++)
	{
		b = a;
		a += c * 2 + (i % 3 == 1);
		//cout << b << " + " << c << " * 2" << endl;
		c = b;
		a %= Modulo;
		arr[i + 1] = (b * 4) % Modulo;
	}
}

int solve()
{
	int n;
	cin >> n;
	if(n < 3) return 0;
	return arr[n];
}

int main()
{
	ios_base::sync_with_stdio(0);
	fill();
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;	
}
