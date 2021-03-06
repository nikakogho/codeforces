#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int l = -1, r = -1;
	bool done = false;
	int arr[n];
	cin >> arr[0];
	int last = arr[0];
	for(int i = 1; i < n; i++)
	{
		int x;
		cin >> x;
		if(x < last)
			if(l == -1) 
			{
				l = i - 1;
				r = i;
			}
			else if(!done) r = i;
			else
			{
				cout << "no";
				return 0;
			}
		else if(l > -1) done = true;
		arr[i] = last = x;
	}
	if(l == -1 || r == -1) cout << "yes\n1 1";
	else if(r < n - 1 && arr[l] > arr[r + 1]) cout << "no";
	else if(l > 0 && arr[r] < arr[l - 1]) cout << "no";
	else cout << "yes\n" << (l + 1) << " " << (r + 1);
}
