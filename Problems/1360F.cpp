#include <bits/stdc++.h>

using namespace std;

short n, m;
vector<string> words;

///vector<set<char>> values;

bool worksfor(string a, string b)
{
	short delta = 0;
	for(short i = 0; i < m; i++) 
	{
		if(a[i] != b[i])
		{
			delta++;
			if(delta == 2) return false;
		}
	}
	return true;
}

bool checkfor(string word)
{
	for(string w : words) if(!worksfor(word, w)) return false;
	return true;
}

/*
string dive(string word, int index)
{
	if(index == m) return checkfor(word) ? word : "-1";
	for(char c : values[index])
	{
		string ans = dive(word + c, index + 1);
		if(ans != "-1") return ans;
	}
	return "-1";
}
*/

string solve()
{
	//short n, m;
	words.clear();
	//values.clear();
	//values.assign(m, { });
	//words = new string[n];
	cin >> n >> m;
	words.assign(n, "");
	//string words[n];
	//values = new set<char>[m];
	for(short i = 0; i < n; i++) cin >> words[i];
	string first = words[0];
	if(checkfor(first)) return first;
	for(short i = 0; i < m; i++)
	{
		char old = first[i];
		for(char c = 'a'; c <= 'z'; c++)
		{
			first[i] = c;
			if(checkfor(first)) return first;
		}
		first[i] = old;
	}
	return "-1";
}

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
