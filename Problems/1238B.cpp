#include <bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n, r;
		cin >> n >> r;
		int arr[n];
		int shots = 0;
		for(int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, arr + n);
		//for(int i : arr) cout << i << " ";
		//cout << endl << endl;
		int last = 0;
		for(int i = n - 1; i > -1; i--)
		{
			if(last == arr[i]) continue;
			if(arr[i] <= shots * r) break;
			shots++;
			last = arr[i];
			//cout << "last is " << last << endl;
		}
		cout << shots << endl;
	}	
}
