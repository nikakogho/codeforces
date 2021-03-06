#include <bits/stdc++.h>

using namespace std;

int main()
{
	int b, k;
	cin >> b >> k;
	int arr[k];
	for(int i = 0; i < k; i++) cin >> arr[i];
	bool odd = false;
	if(b % 2 == 0) odd = arr[k - 1] % 2;
	else
	{
		int sum = 0;
		for(auto x : arr) sum += x % 2;
		odd = sum % 2;
	}
	cout << (odd ? "odd" : "even");
}
