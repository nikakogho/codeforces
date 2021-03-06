#include <bits/stdc++.h>

using namespace std;

short abs(short x)
{
	return x < 0 ? -x : x;
}

int main()
{
	short n;
	cin >> n;
	short size = n * 2 + 1;
	for(short y = 0; y < size; y++)
	{
		short max = n - abs(n - y);
		string answer = "";
		for(short x = 0; x < size; x++)
		{
			short ans = max - abs(n - x);
			if(ans < 0) answer += " ";
			else answer += to_string(ans);
			answer += " ";
		}
		auto it = answer.end();
		for(it--; *it == ' '; it--);
		it++;
		answer.erase(it, answer.end());
		cout << answer << endl;
	}
}
