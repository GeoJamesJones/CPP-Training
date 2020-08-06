#pragma once
#include <iostream>
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(double radius, Point loc) :
		_radius(radius), Shape::Shape(loc) {

	};

	void DrawShape() const override {
		Shape::DrawShape();
		std::cout << "Radius: " << _radius << std::endl;
	}
private:
	double _radius;
};

