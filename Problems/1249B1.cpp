#include <bits/stdc++.h>

using namespace std;

int main()
{
	short q;
	cin >> q;
	while(q--)
	{
		short n;
		cin >> n;
		short arr[n];
		for(short i = 0; i < n; i++) cin >> arr[i];
		for(short i = 0; i < n; i++)
		{
			int day = 1;
			for(int index = i; arr[index] != i + 1; day++)
			{
				index = arr[index] - 1;
			}
			cout << day << " ";
		}
		cout << endl;
	}	
}
