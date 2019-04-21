#pragma once
#include "Rectangle.h"
class Square :
	public Rectangle
{
public:
	Square() {
		cout << "请输入边长" << endl;
		cin >> a;
	}
	double getArea() {
		return a*a;
	}
	void printArea(ofstream & x) {
		x << "边长为" << a << "的正方形面积为" << getArea() << endl;
	}
private:
	double a,h;
};

