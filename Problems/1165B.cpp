#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	int answer = 0;
	for(int i = 0; i < n; i++) if(arr[i] > answer) answer++;
	cout << answer;
}
