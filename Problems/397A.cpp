#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	bool arr[100];
	short l, r;
	cin >> l >> r;
	for(short i = 0; i < l; i++) arr[i] = 0;
	for(short i = l; i < r; i++) arr[i] = 1;
	for(short i = r; i < 100; i++) arr[i] = 0;
	while(--n)
	{
		cin >> l >> r;
		for(short i = l; i < r; i++) arr[i] = 0;
	}
	short sum = 0;
	for(short i = 0; i < 100; i++) sum += arr[i];
	cout << sum;
}
