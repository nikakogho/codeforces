#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int alice;
	cin >> alice;
	vector<int> coalition = { 1 };
	int coalitionsum = alice, sum = alice;
	for(int i = 2; i <= n; i++)
	{
		int x;
		cin >> x;
		sum += x;
		if(x * 2 <= alice) 
		{
			coalition.push_back(i);
			coalitionsum += x;
		}
	}
	if(coalitionsum * 2 > sum)
	{
		cout << coalition.size() << endl;
		for(int party : coalition) cout << party << " ";
	}
	else cout << 0;
}
