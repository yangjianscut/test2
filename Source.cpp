#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Square.h"
#include"Triangle.h"

int main() {
	ofstream out("areaRecord.txt");
	while(true){
		cout << "1—	建立圆\n"
			<< "2—	建立三角形\n"
			<< "3--建立长方形\n"
			<< "4--建立正方形\n" 
			<<"5--退出"<<endl;
		int control;
		cin >> control;
		if (control == 5) break;
		Shape *a=0;
		//out.open();
		switch (control) {
			case 1:a = new Circle;break;
			case 2:a = new Triangle;break;
			case 3:a = new Rectangle;break;
			case 4:a = new Square;break;
		};
		//(*a)();
		a->printArea(out);
	}
	out.close();
	return 0;
}