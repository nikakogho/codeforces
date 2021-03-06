#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	map<string, string> ips;
	while(n--)
	{
		string name, ip;
		cin >> name >> ip;
		ips.insert( { ip, name } );
	}
	while(m--)
	{
		string a, ip;
		cin >> a >> ip;
		string key = ip.substr(0, ip.size() - 1);
		string name = ips.find(key)->second;
		string answer = a + " " + ip + " #" + name;
		cout << answer << endl;
	}
}
