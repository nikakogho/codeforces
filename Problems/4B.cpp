#include <bits/stdc++.h>

using namespace std;

int main()
{
	int d, sum;
	cin >> d >> sum;
	int minsum = 0, maxsum = 0;
	pair<int, int> days[d];
	for(int i = 0; i < d; i++)
	{
		int min, max;
		cin >> min >> max;
		minsum += min;
		maxsum += max;
		days[i] = { min, max };
	}
	if(sum < minsum || sum > maxsum) cout << "NO";
	else
	{
		cout << "YES" << endl;
		int extra = sum - minsum;
		for(int i = 0; i < d; i++)
		{
			int amount = days[i].first;
			int plusMax = days[i].second - amount;
			int plus = plusMax > extra ? extra : plusMax;
			amount += plus;
			extra -= plus;
			cout << amount << " ";
		}
	}
}
