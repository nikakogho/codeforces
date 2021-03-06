#include <bits/stdc++.h>

using namespace std;

int main()
{
	int v1, v2, t;
	cin >> v1 >> v2 >> t;
	int v = v1 - v2;
	int answer = 0;
	if(v > 0)
	{
		//v2 * x = (v1 - v2) * t
		//x = t * (v1 - v2) / v2
		//x = t * v / v2
		answer = t * v / v2;
		if((t * v) % v2 > 0) answer++;
	}
	cout << answer;
}
