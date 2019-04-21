#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class Shape
{
public:
	Shape(){}
	~Shape(){}
	virtual void input() {}
	virtual double getArea() { return 1.0; }
	virtual void printArea(ofstream&) {}
};

