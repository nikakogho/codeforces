#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, a;
	cin >> n >> a;
	bool arr[n];
	for(short i = 0; i < n; i++) cin >> arr[i];
	short count = 0;
	for(short i = 0; i < n; i++)
	{
		short left = a - i, right = a + i;
		if(left < 1 && right > n) continue;
		bool x = left > 0 && arr[left - 1];
		bool y = right <= n && arr[right - 1];
		if(x && y) count += 2 - (i == 0);
		else if(x && right > n) count++;
		else if(y && left < 1) count++;
	}
	cout << count;
}
