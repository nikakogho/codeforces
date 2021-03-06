#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Student tuple<int, int, int>
#define take(s, n) get<n>(s)

bool skillsort(const Student& a, const Student& b)
{
	return take(a, 0) > take(b, 0);
}

struct costsort
{
	bool operator()(const Student& a, const Student& b)
	{
		return take(a, 1) > take(b, 1);
	}
};

int step = 0;
void log(string message = "")
{
	//cout << "Reached step " << (++step) << " : " << message << endl;
}

void logque(const priority_queue<Student, vector<Student>, costsort>& q)
{
	return;
	auto cheque = q;
	while(cheque.size() > 0)
	{
		auto st = cheque.top();
		cheque.pop();
		cout << "level cost index : " << take(st, 0) << " " << take(st, 1) << " " << take(st, 2) << endl;
	}
}

void solve()
{
	int n, m, s;
	cin >> n >> m >> s;
	pair<int, int> bugs[m];
	int answers[m], levels[n];
	Student students[n];
	for(int i = 0; i < m; i++) 
	{
		int bg;
		cin >> bg;
		bugs[i] = { bg, i };
	}
	for(int i = 0; i < n; i++) cin >> levels[i];
	for(int i = 0; i < n; i++)
	{
		int cost;
		cin >> cost;
		students[i] = make_tuple( levels[i], cost, i + 1 );
	}
	sort(bugs, bugs + m, greater<pair<int, int>>());
	sort(students, students + n, skillsort);
	priority_queue<Student, vector<Student>, costsort> oldque;
	int hardest = bugs[0].first;
	int _i = 0;
	for(; _i < n && take(students[_i], 0) >= hardest; _i++) oldque.push(students[_i]);
	if(oldque.size() == 0)
	{
		cout << "NO";
		return;
	}
	auto best = oldque.top();
	ll firstcost = take(best, 1); //take cost
	if(firstcost > s)
	{
		cout << "NO";
		return;
	}
	int _i0 = _i;
	//log("start");
	int l = 1, r = m;
	int mint = m + 1;
	int finalanswer[m];
	for(int t = m / 2; l <= r; t = (l + r) / 2)
	{
		_i = _i0;
		auto que = oldque;
		//log("t = " + to_string(t));
		//log("que size is " + to_string(que.size()));
		best = que.top();
		que.pop();
		ll cost = firstcost;
		//log("First cost is " + to_string(firstcost));
		int index = take(best, 2); 
		for(int i = 0; i < t; i++) answers[bugs[i].second] = index;
		bool failed = 0;
		for(int j = t; j < m; j += t)
		{
			//log(" j = " + to_string(j));
			hardest = bugs[j].first;
			//log(" Hardest is " + to_string(hardest));
			for(; _i < n && take(students[_i], 0) >= hardest; _i++) que.push(students[_i]);
			//log("Que size is " + to_string(que.size()));
			//logque(que);
			if(que.size() == 0) 
			{
				failed = 1;
				//log("Failed due to empty que");
				break;
			}
			best = que.top();
			que.pop();
			if((cost += take(best, 1)) > s)
			{
				//log("Failed because cost was " + to_string(cost));
				failed = 1;
				break;
			}
			//log(" Cost for " + to_string(j) + " is " + to_string(cost));
			int last = min(j + t, m);
			index = take(best, 2);
			for(int bugi = j; bugi < last; bugi++) answers[bugs[bugi].second] = index;
		}
		if(failed)
		{
			l = t + 1;
		}
		else
		{
			mint = t;
			for(int i = 0; i < m; i++) finalanswer[i] = answers[i];
			r = t - 1;
		}
	}
	if(mint > m) cout << "NO";
	else
	{
		cout << "YES\n";
		for(int i = 0; i < m; i++) cout << finalanswer[i] << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	solve();
}
