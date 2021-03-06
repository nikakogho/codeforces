#include <bits/stdc++.h>

using namespace std;

struct cell
{
	double v, cap, t;
	
	cell(double v, double cap)
	{
		this->v = v;
		this->cap = cap;
		t = cap / v;
	}
};

bool compare(cell* a, cell * b)
{
	return a->t < b->t;
}

int main()
{
	int n, sum = 0;
	double p;
	cin >> n >> p;
	vector<cell*> cells(n);
	for(int i = 0; i < n; i++)
	{
		int v, cap;
		cin >> v >> cap;
		sum += v;
		cells[i] = new cell(v, cap);
	}
	if(sum <= p) cout << -1;
	else
	{
		double t = 0;
		double gathered = 0;
		sort(cells.begin(), cells.end(), compare);
		auto it = cells.begin();
		auto c = *it;
		do
		{
			gathered += c->cap;
			p -= c->v;
			int deltat = c->t - t;
			if(gathered + p * deltat >= 0)
			{
				t = c->t;
				it++;
				c = *it;
				gathered += deltat * p;
			}
			else
			{
				t -= gathered / p;
				break;
			}
		}while(true);
		cout << t;
	}
}
