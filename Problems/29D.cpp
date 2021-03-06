#include <bits/stdc++.h>

using namespace std;

struct Node
{
	Node *left, *right;
	bool visited_left, visited_right;
	int value;
	
	bool visited(bool l)
	{
		if(l) return left == nullptr || visited_left;
		return right == nullptr || visited_right;	
	}
	
	Node(int value)
	:value(value)
	{
		left = right = nullptr;
		visited_left = visited_right = 0;
	}
	
	void add(Node *node)
	{
		if(left == nullptr) left = node;
		else right = node;
	}
};

int main()
{
	int n;
	cin >> n;
	Node **nodes = new Node*[n + 1];
	for(int i = 1; i <= n; i++) nodes[i] = new Node(i);
	Node *head = nodes[1];
	int k = n;
	for(int i = 1; i < n; i++)
	{
		int l, r;
		cin >> l >> r;
		auto left = nodes[l], right = nodes[r];
		left->add(right);
		right->add(left);
		if(left->right != nullptr) k--;
		if(right->right != nullptr) k--;
	}
	cout << "K is " << k << endl;
	int order[k];
	for(int i = 0; i < k; i++) cin >> order[i];
}
