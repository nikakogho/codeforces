#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;
	
	//sum1 = n ^ 2 <= a
	//n <= sqrt(a)
	//sum2 = 2 * (1 + 2 + 3 + ... + m) = 2 * m * (m + 1) / 2
	//sum2 = m * (m + 1) = m ^ 2 + m <= b
	//m ^ 2 + m - b <= 0
	//D = 1 + 4 * b
	//m = (-1 + sqrt(D)) / 2
	
	int n = sqrt(a);
	long long D = 4 * b + 1;
	long long m = (sqrt(D) - 1) / 2;
	
	//cout << "Vladik has " << n << " moves" << endl;
	//cout << "Valera has " << m << " moves" << endl;
	
	string answer = n > m ? "Valera" : "Vladik";
	
	cout << answer;
}
