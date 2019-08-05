#include <iostream>

using namespace std;


// c
double getCircleGirth(double r){
	return 2 * 3.14 * r;
}

double getCircleArea(double r){
	return 3.15 * r * r;
}
//c

//c++
class Circle {
public :

	Circle(int cr){
		r = cr;
	}

	void set_r(double cr){
		r = cr;
	}

	double get_circle_girth(){
		return 3.14 * 2 * r;
	}

	double get_circle_area(){
		return 3.14 * r * r;
	}
private :
	double r;
};
//c++

class Circle2 {
public :
	Circle2(double cr){
		r = cr;
		girth = 2 * r * 3.14;
		area = r * r * 3.14;
	}

	void set_r(double cr){
		r = cr;
		girth = 2 * r * 3.14;
		area = r * r * 3.14;
	}

	double get_cricle_girth(){
		return girth;
	}

	double get_circle_area(){
		return area;
	}

private :
	double r;
	double girth;
	double area;
};

int main(){
	double r = 3;
	cout << "r:" << r << "  girth : " << getCircleGirth(r) << endl;
	cout << "r:" << r << "  area  : " << getCircleArea(r) << endl;

	Circle c1(3);
	cout << "c1.girth : " << c1.get_circle_girth() << endl;
	cout << "c1.area  : " << c1.get_circle_area() << endl;
	c1.set_r(4);
	cout << "c1.girth : " << c1.get_circle_girth() << endl;
	cout << "c1.area  : " << c1.get_circle_area() << endl;

	Circle c2(3);
	cout << "c2.girth : " << c2.get_circle_girth() << endl;
	cout << "c2.area  : " << c2.get_circle_area() << endl;
	c2.set_r(4);
	cout << "c2.girth : " << c2.get_circle_girth() << endl;
	cout << "c2.area  : " << c2.get_circle_area() << endl;
}

