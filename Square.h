#pragma once
#include "Rectangle.h"
class Square :
	public Rectangle
{
public:
	Square() {
		cout << "������߳�" << endl;
		cin >> a;
	}
	double getArea() {
		return a*a;
	}
	void printArea(ofstream & x) {
		x << "�߳�Ϊ" << a << "�����������Ϊ" << getArea() << endl;
	}
private:
	double a,h;
};

