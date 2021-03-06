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
		short size = s.size();
		string language = "JAPANESE";
		if(size > 1 && s.substr(size - 2, 2) == "po")
			language = "FILIPINO";
		else if(size > 4 && s.substr(size - 5, 5) == "mnida")
			language = "KOREAN";
		cout << language << endl;
	}
 }
