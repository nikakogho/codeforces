#include <bits/stdc++.h>

using namespace std;

int main()
{
	//1 B
	//2 u
	//1 l
	//1 b
	//2 a
	//1 s
	//1 r
	map<char, int> m;
	string letters = "Bulbasr";
	for(char letter : letters) m[letter] = 0;
	string s;
	cin >> s;
	for(char c : s) m[c]++;
	int arr[] = { m['B'], m['u'] / 2, m['l'], m['b'],
				  m['a'] / 2, m['s'], m['r'] };
	sort(arr, arr + 7);
	cout << arr[0];
}
