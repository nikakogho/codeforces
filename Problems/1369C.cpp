#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve()
{
	int n, k;
	cin >> n >> k;
	int nums[n];
	for(int i = 0; i < n; i++) cin >> nums[i];
	sort(nums, nums + n);
	vector<int> jumps;
	int singularmins = 0;
	ll sum = 0;
	for(int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		if(x == 1) singularmins++;
		else jumps.push_back(x - 1);
	}
	for(int i = 0; i < singularmins; i++) sum += nums[n - 1 - i];
	for(int i = 0; i < k; i++) sum += nums[n - 1 - i]; //max
	sort(jumps.begin(), jumps.end());
	reverse(jumps.begin(), jumps.end());
	k = jumps.size();
	for(int i = 0, ind = 0; i < k; ind += jumps[i], i++) sum += nums[ind];
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
