#pragma once
class Point
{
public:
	Point() : Point(0,0){
	// more code if necessary
	}
	Point(double x, double y) {
		_x = x;
		_y = y;
	}

	Point operator+(const Point& rhs) {
		Point temp(_x + rhs.GetX(), _y + rhs.GetY());
		return temp;
	}

	Point operator-(const Point& rhs) {
		Point temp(_x - rhs.GetX(), _y - rhs.GetY());
		return temp;
	}

	Point operator=(const Point& rhs) {
		Point temp(_x = rhs.GetX(), _y = rhs.GetY());
		return temp;
	}

	void Move(double x, double y) {
		_x = x;
		_y = y;
	}

	double GetX() const {
		return _x;
	}

	double GetY()  const {
		return _y;
	}
private:
	double _x;
	double _y;
};

