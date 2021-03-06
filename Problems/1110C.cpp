#include <bits/stdc++.h>

using namespace std;

int solvea(int a)
{
	//cout << "A method!" << endl;
	//a != 2 ^ x - 1
	int x, check = 1;
	for(x = 0; check <= a; x++) check *= 2;
	return pow(2, x) - 1;
}

int solveb(int a)
{
	//cout << "B method!" << endl;
	//a = 2 ^ x - 1
	int sqr = sqrt(a);
	for(int i = 2; i <= sqr; i++) if(a % i == 0) return a / i;
	return 1;
}

int solve()
{
	int a;
	cin >> a;
	for(int x = a; x > 0; x >>= 1) if(x % 2 == 0) return solvea(a);
	return solveb(a);
}

int main()
{
	ios_base::sync_with_stdio(0);
	short q;
	cin >> q;
	while(q--) cout << solve() << endl;
}
