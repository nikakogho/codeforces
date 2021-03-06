#include <bits/stdc++.h>

using namespace std;

int abs(int x)
{
	return x < 0 ? -x : x;
}

string solve()
{
	string s;
	cin >> s;
	map<char, int> chars;
	char last = ' ';
	auto it = chars.begin();
	sort(s.begin(), s.end());
	//cout << s << endl;
	for(char c : s)
	{
		if(last == c) it->second++;
		else 
		{
			chars[c] = 1;
			it = chars.find(c);
		}
		last = c;
	}
	//for(auto ch : chars) cout << ch.first << " " << ch.second << " , ";
	//cout << endl;
	it = chars.end();
	it--; //points to biggest guy
	int m;
	cin >> m;
	vector<int> biggers;
	vector<int> currentFills;
	int arr[m];
	string t = "";
	int supposedcounts[m];
	for(int i = 0; i < m; i++)
	{
		t += " ";
		int x;
		cin >> x;
		arr[i] = x;
		if(x == 0) currentFills.push_back(i);
		supposedcounts[i] = 0;
	}
	auto endLeft = chars.end();
	endLeft--;
	for(; true; it--)
	{
		char c = it->first;
		int amount = it->second;
		it->second = 0;
		if(amount >= currentFills.size())
		{
			for(int bigger : currentFills)
			{
				t[bigger] = c;
				supposedcounts[bigger] = -1;
			} 
			break;
		}
		if(it == chars.begin()) break;
	}
	//currentFills = biggers;
	do
	{
		biggers = currentFills;
		vector<int> newCurrentFills;
		//cout << "Supposed counts are: ";
		//for(int i = 0; i < m; i++) cout << supposedcounts[i] << " ";
		//cout << endl;
		for(int i = 0; i < m; i++)
		{
			int count = supposedcounts[i];
			if(count == -1) continue;
			for(int bigger : biggers) count += abs(i - bigger);
			supposedcounts[i] = count;
			if(count == arr[i])
			{
				newCurrentFills.push_back(i);
				//cout << "Current fills include " << i << endl;
			}
			//cout << "count for " << i << " is " << count << endl;
		}
		currentFills = newCurrentFills;
		for(it = endLeft; true; it--)
		{
			char c = it->first;
			int amount = it->second;
			if(amount == 0)
			{
				if(it == chars.begin()) break;
				continue;
			}
			//cout << "There are " << amount << " of " << c << endl;
			it->second = 0;
			if(amount >= currentFills.size())
			{
				for(int fill : currentFills)
				{
					t[fill] = c;
					supposedcounts[fill] = -1;
				}
				break;
			}
			if(it == chars.begin()) break;
		}
	}while(currentFills.size() > 0);
	return t;
}

int main()
{
	ios_base::sync_with_stdio(0);
	short q;
	cin >> q;
	while(q--) cout << solve() << endl;
}
