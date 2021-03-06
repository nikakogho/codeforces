#include <bits/stdc++.h>

using namespace std;

string solve()
{
	int n, a, b;
	cin >> n >> a >> b;
	string letters = "";
	for(int i = 0; i < b; i++) letters += 'a' + i;
	int whole = n / b, extra = n % b;
	string answer = "";
	while(whole--) answer += letters;
	for(int i = 0; i < extra; i++) answer += letters[i];
	return answer;
}

int main()
{
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
