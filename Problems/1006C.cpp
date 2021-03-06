#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	long long answer = 0, l = 0, r = 0;
	auto left = arr + 0;
	auto right = arr + n - 1;
	while(left < right)
	{
		l += *left;
		left++;
		
		while(l != r && left <= right)
		{
			while(l > r && right >= left)
			{
				r += *right;
				right--;
			}
			while(l < r && left <= right)
			{
				l += *left;
				left++;
			}
		}
		
		if(l == r) answer = l;
	}
	cout << answer;
}
