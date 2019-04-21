#pragma once
#include "Shape.h"

class Circle :
	public Shape
{
public:
	const double pi = 3.1415926;
	Circle() {
		cout << "������뾶" << endl;
		double r;
		cin >> r;
		radius = r;
	}
	double getArea() {
		return pi*radius*radius;
	}
	void printArea(ofstream & x) {
		x << "�뾶Ϊ" << radius << "��Բ���Ϊ" << getArea() << endl;
	}
private:
	double radius;
};

