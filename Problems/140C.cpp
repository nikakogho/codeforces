#include <bits/stdc++.h>

using namespace std;

struct Trio
{
	int a, b, c;
	
	Trio(int a, int b, int c)
	{
		int arr[] = { a, b, c };
		sort(arr, arr + 3);
		this->a = arr[2];
		this->b = arr[1];
		this->c = arr[0]; 
	}
};
	
class Compare
{
public:
	bool operator() (const pair<int, int>& a, const pair<int, int>& b)
	{
		return a.second < b.second;
	}
};

int main()
{
	int n;
	cin >> n;
	map<int, int> nums;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		auto it = nums.find(x);
		if(it == nums.end())
		{
			stack<int> st;
			st.push(i);
			nums.insert( { x, 1 } );
		}
		else it->second++;
	}
	priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> tree;
	for(auto num : nums)
		tree.push(num);
	vector<Trio> trios;
	while(tree.size() > 2)
	{
		pair<int, int> a = tree.top();
		tree.pop();
		pair<int, int> b = tree.top();
		tree.pop();
		pair<int, int> c = tree.top();
		tree.pop();
		Trio t = { a.first, b.first, c.first };
		trios.push_back(t);
		a.second--;
		b.second--;
		c.second--;
		if(a.second > 0) tree.push(a);
		if(b.second > 0) tree.push(b);
		if(c.second > 0) tree.push(c);
	}
	cout << trios.size() << endl;
	for(auto trio : trios)
		cout << trio.a << " " << trio.b << " " << trio.c << endl;
}
