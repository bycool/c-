#include <iostream>

using namespace std;

class dog {
public :
	dog(int x, int y){  //构造函数
		cout<<"dog. structor()" << endl;
		m_x = x;
		m_y = y;
	}

	void print_dog(){
		cout<< "m_x: " << m_x << endl;
		cout<< "m_y: " << m_y << endl;
	}
	~dog(){
		cout<<"dog. destructor()" << endl;
	}

private :
	int m_x;
	int m_y;
};

int main(){
	dog d1(1,2);
	d1.print_dog();
	
}
