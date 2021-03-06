#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	vector<short> v;
	short size = 0;
	for(int i = 0; i < n; i++) 
	{
		short x;
		cin >> x;
		bool fresh = true;
		for(int j = 0; j < size; j++) { if(v[j] == x) { fresh = false; break; } }
		if(fresh) { size++; v.push_back(x); }
	}
	sort(v.begin(), v.end());
	vector<short> answer;
	for(int i = 0; i < size; i++)
	{
		short x = v[i];
		bool fresh = true;
		for(int j = 0; j < answer.size(); j++)
		{
			if(x % answer[j] == 0)
			{
				fresh = false;
				break;
			}
		}
		if(fresh) answer.push_back(x);
	}
	cout << answer.size();
}
