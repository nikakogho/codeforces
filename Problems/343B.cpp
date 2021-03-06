#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	stack<bool> st;
	auto it = s.begin();
	st.push(*it == '+');
	for(it++; it < s.end(); it++)
	{
		bool b = *it == '+';
		if(st.empty() || st.top() ^ b) st.push(b);
		else st.pop();
	}
	string answer = st.size() == 0 ? "Yes" : "No";
	cout << answer;
}
