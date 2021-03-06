#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	bool explored[n + 1];
	for(int i = 1; i <= n; i++) explored[i] = 0;
	int next[n + 1];
	int costs[n + 1];
	for(int i = 1; i <= n; i++) cin >> costs[i];
	for(int l = 1; l <= n; l++)
	{
		int r;
		cin >> r;
		next[l] = r;
	}
	int starting = 1;
	int total = 0;
	int visited[n + 1];
	do
	{
		int cost = 0;
		int vertex = starting;
		vector<int> visits;
		for(int i = 1; i <= n; i++) visited[i] = -1;
		do
		{
			visited[vertex] = visits.size();
			visits.push_back(vertex);
			explored[vertex] = 1;
			vertex = next[vertex];
			if(explored[vertex])
			{
				if(visited[vertex] == -1)
				{
					cost = 0;
					break;
				}
				cost = costs[vertex];
				for(int i = visited[vertex] + 1; i < visits.size(); i++) if(costs[visits[i]] < cost) cost = costs[visits[i]];
				break;
			}
		}while(true);
		explored[vertex] = 1;
		//cout << "starting at " << starting << " with cost of " << cost << endl;
		total += cost;
		for(starting++; starting <= n && explored[starting]; starting++);
	}while(starting <= n);
	cout << total;
}
