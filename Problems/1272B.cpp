#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int l = 0, r = 0, d = 0, u = 0;
		for(char c : s)
		{
			if(c == 'L') l++;
			else if(c == 'D') d++;
			else if(c == 'R') r++;
			else u++;
		}
		int h = l > r ? r : l;
		int v = u > d ? d : u;
		if(h == 0) v = v == 0 ? 0 : 1;
		else if(v == 0) h = h == 0 ? 0 : 1;
		string sl = "", sd = "", su = "", sr = "";
		while(h--) { sl += 'L'; sr += 'R'; }
		while(v--) { su += 'U'; sd += 'D'; }
		string answer = sl + sd + sr + su;
		cout << answer.size() << endl << answer << endl;
	}
}
