#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	int kids[n];
	for(int i = 0; i < n; i++) cin >> kids[i];
	sort(kids, kids + n);
	deque<int> answer;
	bool left = true;
	for(int i = n - 1; i >= 0; i--)
	{
		left = !left;
		if(left) answer.push_front(kids[i]);
		else answer.push_back(kids[i]);
	}
	for(int x : answer) cout << x << " ";
}
