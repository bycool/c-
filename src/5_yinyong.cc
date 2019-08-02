#include <iostream>

using namespace std;

void test1(){
	int a = 20;
	int b = 30;
	int *p = &a;
	*p = 40;  //指针修改a

	int &re = a; //re是a的引用
	re = 50;
	cout<<"---------------------"<<endl;

	cout<<"re:"<< re<<endl;
	cout<<"a :"<< a <<endl;
}

void test2(){
	int a = 1;
	const int & b = a;
	a = 2;
	cout<<"---------------------"<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
}

int main(void){
	test1();
	test2();
}
