#include <iostream>

using namespace std;

int getA1(){
	int a = 10;
	return a;
}

int getA2(int* a){
	*a = 10;
}

int& getA3(){
	int b = 10;
	return b;
}

int main(){
	int a = 0;
//	a = getA1();

	a = getA3();
	cout<<"a:"<<a<<endl;

	return 0;
}
