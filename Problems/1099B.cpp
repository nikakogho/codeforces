#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int a = sqrt(n);
	if(a * a < n) a++;
	
	int b = n / a + (n % a > 0);
	
	int answer = a + b;
	
	cout << answer;
}
