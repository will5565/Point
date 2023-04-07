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

//overload plus operator in polygon to add points together to make a polygon (3 or more points)
//another plus operator to add a point to polygon
//insertion and extraction overloaded operators
//perimeter fucntion that uses distance function
//subtraction operator to take away a point