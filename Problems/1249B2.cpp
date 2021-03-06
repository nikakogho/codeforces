#include <bits/stdc++.h>

using namespace std;

int main()
{
	short q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		int arr[n], days[n];
		for(int i = 0; i < n; i++)
		{
			days[i] = 0;
			cin >> arr[i];
		}
		for(int i = 0; i < n; i++)
		{
			if(days[i] > 0) cout << days[i] << " ";
			else
			{
				int count = 1;
				vector<int> toShift = { i };
				for(int index = i; arr[index] != i + 1; count++)
				{
					toShift.push_back(index);
					index = arr[index] - 1;
				}
				for(int x : toShift) days[x] = count;
				cout << count << " ";
			}
		}
		cout << endl;
	}	
}
