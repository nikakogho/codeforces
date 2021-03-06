#include <bits/stdc++.h>

using namespace std;

#define ll long long

double solve()
{
	string a, b;
	cin >> a >> b;
	//int n = a.size();
	int off = 0;
	int blur = 0;
	for(char c : a) off += c == '+' ? 1 : -1;
	for(char c : b)
	{
		if(c == '?') blur++;
		else if(c == '+') off--;
		else off++;
	}
	if(blur == 0) return off == 0;
	//if(off == 0) return blur % 2 == 0 ? 0.5 : 0;
	if(off < 0) off = -off;
	if(off > blur) return 0;
	if(off % 2 != blur % 2) return 0;
	double total = 1 << blur;
	//off = 3 
	//blur = 3
	int mid = blur / 2; //1
	ll plus = mid + off / 2 + off % 2; //3 out of 3
	double ans = 1;
	for(int i = plus + 1; i <= blur; i++) ans *= i;
	for(int i = 2; i <= blur - plus; i++) ans /= i;
	ans /= total;
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	double prob = solve();
	cout << setprecision(10) << prob;
}
