#include <bits/stdc++.h>

using namespace std;

pair<short, short> attain(string s)
{
	stringstream ss(s);
	short h, m;
	char c;
	ss >> h >> c >> m;
	return { h, m };
}

int main()
{
	string t1, t2;
	cin >> t1 >> t2;
	auto p1 = attain(t1), p2 = attain(t2);
	short h1 = p1.first, h2 = p2.first, m1 = p1.second, m2 = p2.second;
	short hdelta = h2 - h1, mdelta = m2 - m1;
	short h = h1 + hdelta / 2, m = m1 + mdelta / 2;
	if(hdelta % 2 == 1) m += 30;
	if(m > 59)
	{
		m -= 60;
		h++;
	}
	printf("%02d:%02d", h, m);
}
