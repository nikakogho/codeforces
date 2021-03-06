#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	short delta = '1';
	while(t--)
	{
		int n;
		cin >> n;
		string s = to_string(n);
		int count = s.size() * 9 - 9;
		count += s[0] - delta;
		char a = s[0];
		bool works = true;
		for(char c : s) 
		{
			if(c > a) break;
			if(c < a)
			{
				works = false;
				break;
			}
		}
		count += works;
		cout << count << endl;
	}	
}
