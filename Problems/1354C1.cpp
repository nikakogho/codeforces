#include <bits/stdc++.h>
using namespace std;

#define ll long long

const double Pi = 3.14159265359;
const double ToRad = Pi / 180.0;

void solve()
{
	int n;
	cin >> n;
	n *= 2;
	double x = 1.0 / tan(Pi / n);
	cout << setprecision(8) << x << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--) 
	solve();
}
