#include "Point.h"
#include "Math.h"
#include <iomanip>

using namespace std;

Point::Point(int x, int y) {
	mX = x;
	mY = y;
}


double Point::distance(const Point& rcPoint) const {
	const int TWO = 2;
	double totalDistance;

	totalDistance = sqrt(pow((mX - rcPoint.mX), TWO) + pow((mY - rcPoint.mY), TWO));

	return totalDistance;
}

Point Point::operator+ (const Point& rcPoint) const {
	Point sumPoint;

	sumPoint.mX = mX + rcPoint.mX;
	sumPoint.mY = mY + rcPoint.mY;

	return sumPoint;
}

ostream& operator<< (ostream& rcOut, Point& rcPoint) {

	rcOut << "(" << rcPoint.mX << ", " << rcPoint.mY << ")";

	return rcOut;
}

istream& operator>> (istream& rcIn, Point& rcPoint) {
	char leftParen = '(', comma = ',', rightParen = ')',
		space = ' ';

	rcIn >> leftParen >> rcPoint.mX >> comma >> space >> rcPoint.mY
		>> rightParen;

	return rcIn;
}

int Point::getX() {
	return mX;
}

int Point::getY() {
	return mY;
}