#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle() {
		cout << "请输入底和高" << endl;
		cin >> a>> h;
	}
	double getArea() {
		return 0.5*a*h;
	}
	void printArea(ofstream & x) {
		x << "底高为" << a <<","<<h<< "的长方形面积为" << getArea() << endl;
	}
private:
	double a,h;
};

