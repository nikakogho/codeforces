#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, a, b;
	cin >> n >> a >> b;
	b++;
	short answer = n - a;
	if(answer > b) answer = b;
	cout << answer;
}
