#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	set<int> nums;
	for(int i = 1; i <= n; i++) nums.insert(i);
	for(int i = 1; i < n; i++)
	{
		int x;
		cin >> x;
		nums.erase(x);
	}
	cout << *nums.begin();
}
