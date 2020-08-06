#include <iostream>
#include <cstdio>
#include "Point.h"
#include "Shape.h"

void ShowPoint(const Point& point) {
	printf("Point at location (%8.2f, %8.2f)", point.GetX(), point.GetY());
}

void DrawShape(const Shape& shape) {
	printf("Shape at location (%8.2f, %8.2f)",
		shape.GetLocation().GetX(),
		shape.GetLocation().GetY()
		);
}

int main() {
	Point p1(10, 20);
	Point p2(5, 10);
	Point p3(p1 + p2);

	p1 = p2 = p3;
	
	Shape s(p1);
	s.DrawShape();
}