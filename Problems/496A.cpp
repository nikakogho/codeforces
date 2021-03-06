#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	short arr[n];
	short max = 0, maxIndex = -1;
	short last = 0;
	for(short i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr[i] = x;
		if(i > 0 && x - last > max)
		{
			max = x - last;
			maxIndex = i;
		}
		last = x;
	}
	int answer = 10000;
	//cout << "max is " << max << endl;
	for(int i = 1; i < n - 1; i++)
	{
		int ans = arr[i + 1] - arr[i - 1];
		//cout << "ans is " << ans << endl;
		if(ans < max) ans = max;
		if(ans < answer) answer = ans;
	}
	cout << answer;
}
