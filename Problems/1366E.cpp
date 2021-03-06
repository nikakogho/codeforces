#include <bits/stdc++.h>

using namespace std;

#define Modulo 998244353
#define ll long long

ll *A, *B;
ll r;

ll solvepart(int x, int nextX)
{
	if(r == -1) return 0;
	
	int first = r;
	
	for(; r > -1; r--, first--)
	{
		if(A[r] < x) return 0;
		if(A[r] == x) break;
	}
	
	if(r == -1) return 0;
	
	int mid = first;
	
	for(; r > -1; r--, mid--)
	{
		int num = A[r];
		if(num < nextX) return 0;
		if(num < x) return first - mid;
	}
	
	if(r == -1) return 1;
	cout << "reached huh :)" << endl;
	return first - mid;
}

int main()
{
	int n, m;
	cin >> n >> m;
	A = new ll[n];
	B = new ll[m];
	for(int i = 0; i < n; i++) cin >> A[i];
	for(int i = 0; i < m; i++) cin >> B[i];
	
	ll answer = 1;
	r = n - 1;
	
	for(int bi = m - 1; bi > -1; bi--)
	{
		//cout << "Counting for " << B[bi] << " ";
		int next = bi == 0 ? 0 : B[bi - 1];
		answer *= solvepart(B[bi], next);
		if(answer == 0) break;
		answer %= Modulo;
	}
	
	if(r >= 0) answer = 0;
	
	cout << answer;
}
