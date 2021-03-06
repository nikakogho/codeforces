#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	if(e > f)
	{
		long long n = a > d ? d : a;
		long long sum = n * e;
		d -= n;
		n = c > b ? b : c;
		if(n > d) n = d;
		sum += n * f;
		cout << sum;
	}
	else
	{
		long long n = c > b ? b : c;
		if(n > d) n = d;
		long long sum = n * f;
		d -= n;
		n = a > d ? d : a;
		sum += n * e;
		cout << sum;
	}
}
