#pragma once
#include <iostream>

using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0);
	double distance(const Point& rcPoint) const;
	Point operator+ (const Point& rcPoint) const;
	friend ostream& operator<< (ostream& rcOut, Point& rcPoint);
	friend istream& operator>> (istream& rcIn, Point& rcPoint);
	int getX();
	int getY();

private:
	int mX, mY;
};
