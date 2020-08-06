#pragma once
#include "Point.h"
#include <cstdio>

class Shape
{

public:
	Shape() = default;

	explicit Shape(const Point& p) { // conversion constructor
		_location = p;
	}

	const Point& GetLocation() const {
		return _location;
	}

	virtual void DrawShape() const {
		printf("Shape at location (%8.2f, %8.2f)\n",
			GetLocation().GetX(),
			GetLocation().GetY());
	}

private:

	Point _location;
};

