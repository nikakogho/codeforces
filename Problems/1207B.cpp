#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int size = n * m;
	bool A[size];
	for(int i = 0; i < size; i++) cin >> A[i];
	bool can = true;
	vector<pair<int, int>> indices;
	for(int y = 0; y < n && can; y++)
	{
		for(int x = 0; x < m && can; x++)
		{
			int index = y * m + x;
			if(A[index])
			{
				bool first = y < n - 1 && x < m - 1;
				bool second = y < n - 1 && x > 0;
				bool third = y > 0 && x < m - 1;
				bool last = y > 0 && x > 0;
				if(first)
					first = A[index + 1] && A[index + m] && A[index + m + 1];
				if(second)
					second = A[index - 1] && A[index - 1 + m] && A[index + m];
				if(third)
					third = A[index - m] && A[index - m + 1] && A[index + 1];
				if(last)
					last = A[index - m - 1] && A[index - m] && A[index - 1];
				bool works = first || second || third || last;
				if(works) { if(first) indices.push_back( { y + 1, x + 1 } ); }
				else can = false;
			}
		}
	}
	if(!can) cout << -1;
	else
	{
		cout << indices.size() << endl;
		for(auto p : indices) cout << p.first << " " << p.second << endl;
	}
}
