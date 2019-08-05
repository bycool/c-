#include <iostream>

using namespace std;

int add(int a, int b){
	cout<<a<<" "<<b<<endl;
}

int add(int a){
	cout<<a<<endl;
}

char add(int a, int b, int c){
	cout<<a<<" "<<b<<" "<<c<<endl;
}


int test(int a){
	cout<<a<<endl;
}

/*
int test(int a, int b = 1){  和上面的函数在编译时会产生歧义。
	cout <<a <<" "<<b<<endl;
}
*/

int test(int a, int){  //和test(int a)互为重载函数
	cout<<":"<<a<<endl;
}

int main(){
	add(1,2);
	add(1);
	add(1,2,3);

	cout<<"--------------------"<<endl;
	test(2);

	test(2,1);

	return 0;	
}

