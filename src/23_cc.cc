#include <iostream>

using namespace std;

class dog {
public :
	dog(){
		cout << "dog()" << endl;
		m_x = 0;
		m_y = 0;
	}

	dog(int x, int y){
		cout << "dog(int, int)" << endl;
		m_x = x;
		m_y = y;
	}

	void print_dog(){
		cout << "mx : " << m_x<< " my : " << m_y << endl;
	}

	dog(const dog & another){
		cout << "dog(const &) " << endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}

	void operator=(const dog & another){
		cout << "operator=(const dog)" <<endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}

	~dog(){
		cout << "~dog()" << endl;
	}
private :
	int m_x;
	int m_y;
};

void test1(){
	dog d1(10, 20);
	dog d2(d1);
}

void test2(){
	dog d1(10, 20);
	dog d2 = d1;

//	d2 = d1;
}

void func(dog d){
	cout << "func start.." << endl;
	d.print_dog();
	cout << "func stop.." << endl;
}

void test3(){
	cout << " test 3 start.." << endl;
	dog d1(10, 20);
	func(d1);
	cout << " test 3 stop.." << endl;
}


int main(){
	test2();
	return 0;
}

