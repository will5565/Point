#include "pch.h"
#include "Point.h"

using namespace std;

TEST (PointTest, ConstructorTest) {
	Point point1;

	EXPECT_EQ (0, point1.getX());
	EXPECT_EQ(0, point1.getY());
}

TEST (PointTest, distanceTest) {
	Point point1 (1, 2), point2 (2, 6);
	Point copyPoint (point1);

	EXPECT_EQ (point1.distance (point2), copyPoint.distance (point2));
}

TEST (PointTest, extractionTest) {
	Point point1 (1, 2);
	stringstream cStream;

	cStream << point1;

	EXPECT_TRUE (cStream.str() == "(1, 2)");
}

TEST (PointTest, insertionTest) {
	Point point1;
	stringstream ss ("(1, 2)");

	ss >> point1;

	EXPECT_EQ ("(1, 2)", ss.str());
}
