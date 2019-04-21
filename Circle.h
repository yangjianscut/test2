#pragma once
#include "Shape.h"

class Circle :
	public Shape
{
public:
	const double pi = 3.1415926;
	Circle() {
		cout << "请输入半径" << endl;
		double r;
		cin >> r;
		radius = r;
	}
	double getArea() {
		return pi*radius*radius;
	}
	void printArea(ofstream & x) {
		x << "半径为" << radius << "的圆面积为" << getArea() << endl;
	}
private:
	double radius;
};

