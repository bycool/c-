#include <iostream>

using namespace std;

void test1(int a = 600){
	cout << a<<endl;
}

void test2(int a, int b, int c=10){
	cout << a<<endl;
	cout << b<<endl;
	cout << c<<endl;
}

void test3(int, int){
	cout<<"test3"<<endl;
}

int main(){
	test1();
	test1(20);
	test2(1,3);
	test3(1,2);
	return 0;
}
