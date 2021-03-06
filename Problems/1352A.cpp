#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string r = "";
		vector<string> answer;
		for(; n > 0; n /= 10)
		{
			int rem = n % 10;
			if(rem > 0) answer.push_back(to_string(rem) + r);
			r += '0';
		}
		cout << answer.size() << endl;
		for(string s : answer) cout << s << " ";
		cout << endl;
	}
}
