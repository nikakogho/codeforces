#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		char last = ' ';
		string answer = "";
		bool old = false;
		for(char c : s)
		{
			bool been = answer.find(c) != string::npos;
			if(!old) last = c;
			else if(last != c) 
			{
				answer += last;
				last = c;
				old = false;
			}
			old = !old;
			if(been) old = false;
		}
		if(old) answer += last;
		sort(answer.begin(), answer.end());
		cout << answer << endl;
	}	
}
