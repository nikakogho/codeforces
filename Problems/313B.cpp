#include <bits/stdc++.h>

using namespace std;

const int N = 100000;

struct Fenwick
{
	int* arr;
	
	Fenwick()
	{
		arr = new int[N + 1];
		for(int i = 1; i <= N; i++) arr[i] = 0;
	}
	
	int read(int index)
	{
		int sum = 0;
		while(index > 0)
		{
			sum += arr[index];
			index -= index & -index;
		}
		return sum;
	}
	
	void update(int index)
	{
		while(index <= N)
		{
			arr[index]++;
			index += index & -index;
		}
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	Fenwick f;
	string s;
	cin >> s;
	char last = s[0];
	for(int i = 1; i < s.size(); i++)
	{
		char c = s[i];
		if(c == last) f.update(i);
		last = c;
	}
	int m;
	cin >> m;
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		int answer = f.read(r - 1) - f.read(l - 1);
		cout << answer << endl;
	}
}
