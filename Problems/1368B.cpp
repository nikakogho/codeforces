#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	long long k;
	cin >> k;
	string word = "codeforces";
	int counts[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	long long ans = 1;
	while(ans < k)
	{
		int minIndex = 0;
		for(int i = 1; i < 10; i++) if(counts[i] < counts[minIndex]) minIndex = i;
		int old = counts[minIndex];
		int _new = old + 1;
		counts[minIndex] = _new;
		ans /= old;
		ans *= _new;
	}
	string answer = "";
	for(int i = 0; i < 10; i++)
	{
		int count = counts[i];
		char c = word[i];
		while(count--) answer += c;
	}
	cout << answer;
}
