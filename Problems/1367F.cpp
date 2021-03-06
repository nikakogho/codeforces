#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n;
	cin >> n;
	set<int> nums;
	map<int, int> counts;
	int arr[n];
	for(int i = 0; i < n; i++) 
	{
		int x;
		cin >> x;
		arr[i] = x;
		nums.insert(x);
	}
	auto it = nums.begin();
	for(int i = 0; it != nums.end(); it++, i++) counts.insert({*it, i});
	for(int i = 0; i < n; i++) cout << counts[arr[i]] << " ";
	cout << endl;
	//int max = 1, count = 0, last = counts[arr[0]];
	map<int, int> ends;
	ends.insert({ counts[arr[0]], counts[arr[0]] });
	for(int i = 1; i < n; i++)
	{
		int current = counts[arr[i]];
		int left = current - 1;
		auto it = ends.find(left);
		if(it == ends.end())
		{
			ends[current] = current;
		}
		else
		{
			
		}
		//if(current >= last)
		//{
		//	count++;
		//	if(max < count) max = count;
		//}
		//else count = 1;
		//last = current;
	}
	return n - max;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
