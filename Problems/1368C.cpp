#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	short n;
	cin >> n;
	short k = n * 7;
	cout << k << endl;
	vector<pair<int, int>> spots = 
	{
		{ -1, 1 }, { -1, 0 }, { 0, 1 }, { 0, 0 }, { 0, -1 }, { 1, 0 }, { 1, -1 }
	};
	for(short i = 0; i < n; i++)
	{
		short offX = 5 * i;
		for(auto spot : spots) cout << (spot.first + offX) << " " << spot.second << endl;
	}
}
