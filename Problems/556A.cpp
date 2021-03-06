#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	stack<bool> st;
	string s;
	cin >> s;
	while(n--)
	{
		bool b = s[n] == '1';
		if(st.size() == 0 || st.top() == b) st.push(b);
		else st.pop();
	}
	cout << st.size();
}
