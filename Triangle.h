#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle() {
		cout << "������׺͸�" << endl;
		cin >> a>> h;
	}
	double getArea() {
		return 0.5*a*h;
	}
	void printArea(ofstream & x) {
		x << "�׸�Ϊ" << a <<","<<h<< "�ĳ��������Ϊ" << getArea() << endl;
	}
private:
	double a,h;
};

