#include <bits/stdc++.h>
using namespace std;

#include <windows.h>

short lastColor = 7;
void setcolor(short color)
{
	if(color == lastColor) return;
	lastColor = color;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void draw(bool moved[], short arr[], int n, int ourMin, int minIndex)
{
	for(short i = 0; i < n; i++)
	{
		short color = arr[i] == i + 1 ? 10 : 12;
		if(arr[i] == ourMin && color == 12) color = 14;
		setcolor(color);
		cout << arr[i];
		if(i == n - 1) continue;
		setcolor(moved[i + 1] ? 12 : 10);
		cout << "-";
	}
	setcolor(7);
	cout << "\n";
	//cout << ourMin << " is at " << minIndex << "\n\n";
}

int main()
{
	short q;
	cin >> q;
	while(q--)
	{
		short n;
		cin >> n;
		short arr[n];
		bool moved[n];
		short moves = n - 1;
		short minIndex = 0;
		short ourMin = 0;
		for(short i = 0; i < n; i++) 
		{
			moved[i] = false;
			cin >> arr[i];
		}
		while(moves > 0 && ourMin < n - 1)
		{
			ourMin++;
			minIndex = distance(arr, find(arr, arr + n, ourMin));
			while(arr[minIndex] - 1 < minIndex)
			{
				//draw(moved, arr, n, ourMin, minIndex);
				if(!moved[minIndex])
				{
					moved[minIndex] = true;
					short a = minIndex, b = minIndex - 1;
					arr[a] += arr[b];
					arr[b] = arr[a] - arr[b];
					arr[a] -= arr[b];
					moves--;
					minIndex--;
					if(moves == 0) break;
				}
				else break;
			}
		}
		//draw(moved, arr, n, ourMin, minIndex);
		for(short x : arr) cout << x << " ";
		cout << endl;
	}	
}
