#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n, x;
	cin >> n >> x;
	set<int> nums = { x };
	map<int, int> left;
	for(int i = 1; i < n; i++)
	{
		cin >> x;
		auto it = nums.upper_bound(x);
		int answer;
		if(it != nums.end() && left.count(*it) == 0)
		{
			left[*it] = x;
			answer = *it;
		}
		else
		{
			it--;
			answer = *it;
		}
		nums.insert(x);
		cout << answer << " ";
	}
}
