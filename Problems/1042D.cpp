#include <bits/stdc++.h>

using namespace std;

const int N = 200 * 1000 + 13;

int n;
long long T;
int a[N];
int f[N];

void update(int x){
	for (int i = x; i < N; i |= i + 1)
		++f[i];
}

int get(int x){
	int res = 0;
	for (int i = x; i >= 0; i = (i & (i + 1)) - 1)
		res += f[i];
	return res;
}

int main() {
	cin >> n >> T;
	for(int i = 0; i < n; i++) cin >> a[i];
	
	vector<long long> pref(1, 0ll);
	long long pr = 0;
	for(int i = 0; i < n; i++)
	{
		pr += a[i];
		pref.push_back(pr);
	}
	
	sort(pref.begin(), pref.end());
	pref.resize(unique(pref.begin(), pref.end()) - pref.begin());
	
	long long ans = 0;
	pr = 0;
	update(lower_bound(pref.begin(), pref.end(), 0ll) - pref.begin());
	
	for(int i = 0; i < n; i++)
	{
		pr += a[i];
		
		int index = upper_bound(pref.begin(), pref.end(), pr - T) - pref.begin();
		ans += (i + 1 - get(index - 1));
		
		int k = lower_bound(pref.begin(), pref.end(), pr) - pref.begin();
		update(k);
	}
	cout << ans;
}
