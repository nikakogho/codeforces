#include <bits/stdc++.h>

using namespace std;

int main()
{
	short arr[4];
	for(short i = 0; i < 4; i++) cin >> arr[i];
	sort(arr, arr + 4);
	bool works = arr[0] + arr[3] == arr[1] + arr[2];
	if(!works) works = arr[0] + arr[1] + arr[2] == arr[3];
	if(works) cout << "YES";
	else cout << "NO";
}
