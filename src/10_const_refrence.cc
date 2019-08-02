#include <iostream>

using namespace std;

int main(){
	const int a = 10;
	const int & b = a;
	//b = 20; err:
	cout<<b<<endl;

	int c = 20;
	const int& rc = c;
	c = 30;
	cout<<rc<<endl;

	return 0;
}
