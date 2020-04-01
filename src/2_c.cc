#include <iostream>

using namespace std;

int g_val;
// int g_val = 1; 

int f(int ,int){
	return 10;
}

int main () {
	int a = f(123,2);
	cout<<a<<endl;
}
