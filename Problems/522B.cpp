#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	long long W = 0, H1 = 0, H2 = 0;
	int ih = 0;
	for(int i = 0; i < n; i++)
	{
		int w, h;
		cin >> w >> h;
		arr[i] = w;
		W += w;
		if(h > H1)
		{
			H2 = H1;
			H1 = h;
			ih = i;
		}
		else if(h > H2) H2 = h;
	}
	auto stop = arr + ih;
    auto it = arr + 0;
    for(; it < stop; it++) cout << ((W - *it) * H1) << " ";
    cout << ((W - *it) * H2) << " ";
    for(it++; it < arr + n; it++) cout << ((W - *it) * H1) << " ";
}
