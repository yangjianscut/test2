#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	Rectangle() {
		cout << "�����볤�Ϳ�" << endl;
		cin >> a >> b;
	}
	double getArea() {
		return a*b;
	}
	void printArea(ofstream & x) {
		x << "����Ϊ" << a << "," << b << "�����������Ϊ" << getArea() << endl;
	}
private:
	double a, b;
	
};

