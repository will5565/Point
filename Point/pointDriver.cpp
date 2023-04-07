#include "Point.h"
#include <iostream>

using namespace std;

int main() {
	Point point1(1, 2), point2 (2, 6);
	Point copyPoint(point1);

	cout << point1.distance(point2);


	return EXIT_SUCCESS;
}