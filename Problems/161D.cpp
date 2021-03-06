#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 50005;
const int K = 505;

//int answer = 0;

int n, k;

struct Node;

vector<Node*> nodes;

int dp1[N][K];
vector<int> edges[N];

struct Node
{
	int index;
	Node* parent;
	//vector<Node*> kids;
	int counts[K]; //lower distance counts
	
	Node(int index, Node* parent)
	{
		this->index = index;
		this->parent = parent;
		counts[0] = 1; //could do the other way without this
		for(int i = 1; i < K; i++) counts[i] = 0;
		//if(parent != nullptr) parent->kids.push_back(this);
		for(int i = 1; parent != nullptr && i <= k; parent = parent->parent)
		{
			//if(i == k) answer++;
			parent->counts[i]++; //count up all nodes
			i++;
		}
		nodes.push_back(this);
	}
};

void set_kids(Node* subhead)
{
	for(int index : edges[subhead->index]) set_kids(new Node(index, subhead));
}

/*
void count_cousins(Node* head)
{
	auto counts = head->counts;
	int count = 0;
	int mid = (k + 1) / 2;
	for(int i = 0; i < mid; i++) count += counts[i] * counts[k - i];
	if(k % 2 == 0) count += (counts[k / 2] * (counts[k / 2] - 1)) / 2;
	//count /= 2;
	answer += count;
}
*/

void count_dp1(Node *head)
{
	auto counts = head->counts;
	for(int i = 0; i <= k; i++) dp1[1][i] = counts[i];
	auto it = nodes.begin();
	for(it++; it != nodes.end(); it++)
	{
		auto node = *it;
		counts = node->counts;
		int index = node->index;
		int parentindex = node->parent->index;
		dp1[index][0] = 1;
		dp1[index][1] = counts[1] + 1;
		for(int x = 2; x <= k; x++) dp1[index][x] = counts[x] + dp1[parentindex][x - 1] - counts[x - 2];
	}
}

void give_all_counts()
{
	for(auto node : nodes)
	{
		cout << "For node " << node->index << " counts are " << endl;
		for(int i = 0; i <= k; i++) cout << node->counts[i] << " ";
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin >> n >> k;
	nodes.reserve(n + 1);
	//answer = 0;
	for(int i = 1; i < n; i++)
	{
		int l, r;
		cin >> l >> r;
		if(l > r)
		{
			l += r;
			r = l - r;
			l -= r;
		}
		edges[l].push_back(r);
	}
	auto head = new Node(1, nullptr);
	set_kids(head);
	count_dp1(head);
	ll answer = 0;
	for(int i = 1; i <= n; i++) answer += dp1[i][k];
	answer /= 2;
	cout << answer;
	//for(auto node : nodes) count_cousins(node);
	//give_all_counts();
	//cout << answer;
	//int count = d[1][k];
	//cout << count;
}
