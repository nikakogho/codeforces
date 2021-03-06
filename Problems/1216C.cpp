#include <bits/stdc++.h>

using namespace std;

#define Long long long

struct Rect
{
	Long x1, y1, x2, y2;
	
	Rect(Long x1, Long y1, Long x2, Long y2)
	{
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;
		this->y2 = y2;
	}
	
	Long width()
	{
		return x2 - x1;
	}
	
	Long height()
	{
		return y2 - y1;
	}
	
	Long area()
	{
		return width() * height();
	}
	
	bool overlaps_h(Rect a)
	{
		return x1 <= a.x2 && x2 >= a.x1;
	}
	
	bool overlaps_v(Rect a)
	{
		return y1 <= a.y2 && y2 >= a.y1;
	}
	
	bool covers_h(Rect a)
	{
		return x1 <= a.x1 && x2 >= a.x2;
	}
	
	bool covers_v(Rect a)
	{
		return y1 <= a.y1 && y2 >= a.y2;
	}
	
	bool covers(Rect a)
	{
		return covers_h(a) && covers_v(a);
	}
};

bool cover_h(Rect a, Rect b, Rect c)
{
	if(b.covers(c) || c.covers(b)) return false;
	if(!b.covers_h(a) || !c.covers_h(a)) return false;
	if(!b.overlaps_v(c) && !c.overlaps_v(b)) return false;
	Long low = b.y1 < c.y1 ? b.y1 : c.y1;
	Long high = b.y2 > c.y2 ? b.y2 : c.y2;
	return low <= a.y1 && high >= a.y2;
}

bool cover_v(Rect a, Rect b, Rect c)
{
	if(b.covers(c) || c.covers(b)) return false;
	if(!b.covers_v(a) || !c.covers_v(a)) return false;
	if(!b.overlaps_h(c) && !c.overlaps_h(b)) return false;
	Long left = b.x1 < c.x1 ? b.x1 : c.x1;
	Long right = b.x2 > c.x2 ? b.x2 : c.x2;
	return left <= a.x1 && right >= a.x2;
}

bool solve()
{
	Long x1, x2, y1, y2, x3, y3, x4, y4, x5, y5, x6, y6;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
	Rect white(x1, y1, x2, y2);
	Rect black1(x3, y3, x4, y4);
	Rect black2(x5, y5, x6, y6);
	if(white.area() > black1.area() + black2.area()) return true;
	if(black1.covers(white) || black2.covers(white)) return false;
	if(cover_h(white, black1, black2)) return false;
	if(cover_v(white, black1, black2)) return false;
	return true;
}

int main()
{
	cout << (solve() ? "YES" : "NO");
}
