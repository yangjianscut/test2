#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	Rectangle() {
		cout << "请输入长和宽" << endl;
		cin >> a >> b;
	}
	double getArea() {
		return a*b;
	}
	void printArea(ofstream & x) {
		x << "长宽为" << a << "," << b << "的三角形面积为" << getArea() << endl;
	}
private:
	double a, b;
	
};

