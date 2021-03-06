#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

//void setcolor(short color)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}

struct light
{
	short a, b;
	bool on;
	
	light(short a, short b, bool on)
	{
		this->a = a;
		this->b = b;
		this->on = on;
	}
	
	bool check(short t)
	{
		if(t >= b && (t - b) % a == 0) on = !on;
		return on;
	}
};

int main()
{
	short n;
	cin >> n;
	light* arr[n];
	string s;
	cin >> s;
	for(int i = 0; i < n; i++)
	{
		bool on = s[i] == '1';
		short a, b;
		cin >> a >> b;
		arr[i] = new light(a, b, on);
	}
	short max = 0;
	for(short t = 0; t <= 200; t++)
	{
		short count = 0;
		for(int i = 0; i < n; i++)
		{
			bool b = arr[i]->check(t);
			count += b;
			//short color = b ? 10 : 12;
			//setcolor(color);
			//cout << "o";
			//setcolor(7);
		}
		//cout << "   ";
		if(count > max) max = count;
	}
	cout << endl << max;
}
