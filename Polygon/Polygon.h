#pragma once
#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

//look at polynomial.h, I think it will be very similar

class Polygon {
public:
	Polygon();
	Polygon(const Polygon& rcPoly);


private:
	vector<Point> mcPoints;
};