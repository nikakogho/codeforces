#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, a, b;
	cin >> n >> a >> b;
	int chores[n];
	for(short i = 0; i < n; i++) cin >> chores[i];
	sort(chores, chores + n);
	int x = chores[n - a];
	int smaller = chores[n - a - 1];
	int answer = x - smaller;
	cout << answer;	
}
