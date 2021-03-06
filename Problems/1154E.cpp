#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	map<int, int> arr;
	set<int, greater<int>> nums;
	map<int, int> indices;
	for(int i = 0; i < n; i++) 
	{
		int x;
		cin >> x;
		x--; //align numbers with indices
		arr[i] = x;
		indices.insert({x, i});
		nums.insert(i);
	}
	bool ans[n];
	bool turn = 1;
	do
	{
		auto it_nums = nums.begin();
		int mid_index = indices[*it_nums];
		vector<int> eraseindices;
		auto it_arr = arr.find(mid_index);
		int i = 0;
		for(auto it = it_arr; i <= k && it != arr.end(); i++, it++)
			eraseindices.push_back(it->first);
		i = 0;
		for(auto it = it_arr; i < k; i++)
		{
			if(it == arr.begin()) break;
			it--;
			eraseindices.push_back(it->first);
		}
		//cout << "Indices for player " << turn << " are : ";
	    for(int ind : eraseindices)
		{
			//cout << ind << " ";
			ans[ind] = turn;
			nums.erase(arr[ind]);
			//indices.erase(arr[ind]);
			arr.erase(ind);
		}
		//cout << endl;
		turn = !turn;
	}while(nums.size() > 0);
	for(int i = 0; i < n; i++) cout << (ans[i] ? 1 : 2);
}
