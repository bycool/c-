#include <iostream>

using namespace std;

class A {
public: 
	A(int x){
		cout << "A(int)" << endl;
		m_x = x;
	}

	A(A & an){
		cout << "A(A&)" << endl;
		m_x = an.m_x;
	}

	void printa(){
		cout << "A.m_x : " << m_x << endl;
	}

	~A(){
		cout << "~A()" << endl;
	}
private:
	int m_x;
};

class B {
public:
	B(A & a1, A & a2, int y) : m_y(y), m_a1(a1), m_a2(a2){
		cout << "B(A&, A&, int)" << endl;
	}

	void printb(){
		cout << "printb start.." << endl;
		m_a1.printa();
		m_a2.printa();
		cout<< "B.m_y : " << m_y << endl;
		cout << "printb stop .." << endl;
	}

	~B(){
		cout << "~B()" << endl;
	}
private:
	int m_y;
	A m_a1;
	A m_a2;
};

int main(){
	A a1(1);
	A a2(2);
	a1.printa();
	a2.printa();

	B b1(a1,a2,10);
	b1.printb();
}
