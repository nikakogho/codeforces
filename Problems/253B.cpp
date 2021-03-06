#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

//39 9 18 13 6 16 47 15 1 24
//1 6 9 13 15 16 18 24 39 47

int solve()
{
	//ios_base::sync_with_stdio(0);
	int size = 50001;
	int n;
	fin >> n;
	int counts[size];
	set<int> nums;
	for(int i = 0; i < size; i++) counts[i] = 0;
	for(int i = 0; i < n; i++)
	{
		int x;
		fin >> x;
		counts[x]++;
		nums.insert(x);
	}
	int best = n;
	int leftcount = 0;
	int lastLeftStop = 0;
	for(int m : nums)
	{
		for(int k = lastLeftStop; k < m; k++) leftcount += counts[k];
		int steps = leftcount;
		lastLeftStop = m;
		for(int k = 2 * m + 1; k < size; k++) steps += counts[k];
		if(steps < best) best = steps;
	}
	return best;
}

int main()
{
	fout << solve();
}
