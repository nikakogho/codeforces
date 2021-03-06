#include <bits/stdc++.h>

using namespace std;

int solve()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	if(n == 2)
	{
		if(arr[0] < arr[1]) return 2;
		else return 1;
	}
	int rsize = 1, rmin = arr[n - 1];
	int lmax = arr[n - 3];
	int lsize = 1;
	for(; lsize < n - 2 && arr[n - 3 - lsize] < arr[n - 2 - lsize]; lsize++);
	int answer = 1;
	for(int j = n - 2; j > 0; j--)
	{
		int x = arr[j];
		int count;
		if(lmax < x && x < rmin) count = lsize + 1 + rsize;
		else if(lmax < rmin) count = lsize + rsize;
		else
		{
			int Lsize = lsize + (lmax < x);
			int Rsize = rsize + (rmin > x);
			count = Lsize > Rsize ? Lsize : Rsize;
		}
		if(count > answer) answer = count;
		
		if(x < rmin) rsize++;
		else rsize = 1;
		
		lsize--;
		if(lsize == 0) for(lsize = 1; lsize < j - 1 && arr[j - 2 - lsize] < arr[j - 1 - lsize]; lsize++);
		
		rmin = x;
		lmax = arr[j - 2];
	}
	return answer;
}

int main()
{
	cout << solve();
}
