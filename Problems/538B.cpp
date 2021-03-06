#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int nums[9];
	for(int i = 0; i < 9; i++) nums[i] = 0;
	int powered = 1;
	while(n > 0)
	{
		for(int i = 0; i < n % 10; i++) nums[i] += powered;
		powered *= 10;
		n /= 10;
	}
	int count = 0;
	for(int i = 0; i < 9 && nums[i] > 0; i++) count++;
	cout << count << endl;
	for(int i = 0; i < count; i++) cout << nums[i] << " ";
}
