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
		sort(arr, arr + n);
		vector<short> lasts;
		for(short i = 0; i < n; i++)
		{
			short x = arr[i];
			bool done = false;
			for(short i = 0; i < lasts.size(); i++)
			{
				short delta = x - lasts[i];
				if(delta > 1)
				{
					lasts[i] = x;
					done = true;
					break;
				}
			}
			if(!done) lasts.push_back(x);
		}
		cout << lasts.size() << endl;
	}	
}
