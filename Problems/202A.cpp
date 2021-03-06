#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string s)
{
	int mid = s.size() / 2;
	int size = s.size();
	for(int i = 0; i <= mid; i++) if(s[i] != s[size - 1 - i]) return false;
	return true;
}

int main()
{
	string s;
	cin >> s;
	string answer = "";
	answer += s[0];
	int size = s.size();
	vector<string> possibilities;
	possibilities.push_back(answer);
	for(int i = 1; i < size; i++)
	{
		string old = answer;
		int index;
		char c = s[i];
		for(index = answer.size() - 1; index > -1; index--)
		{
			if(c <= answer[index]) break;
		}
		//cout << "Index for " << i << " letter is " << index << endl;
		if(index == -1)
		{
			answer = "";
			answer += c;
		}
		else if(index == answer.size() - 1) answer += c;
		else
		{
			 answer = answer.substr(0, index + 1);
			 answer += c;
		}
		//cout << "Answer is " << answer << endl;
		possibilities.push_back(answer);
	}
	int index = possibilities.size() - 1;
	while(!is_palindrome(possibilities[index]))
	{
	 	index--;
	}
	cout << possibilities[index];
}
