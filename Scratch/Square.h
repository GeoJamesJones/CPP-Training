#pragma once
#include <iostream>
#include "Shape.h"

class Square : public Shape
{
public:
	Square(double side) : _side(side) {

	};

	virtual void DrawShape() const override {
		//Shape::DrawShape();
		std::cout << "Side: " << _side << std::endl;
	}
private:
	double _side;
};

