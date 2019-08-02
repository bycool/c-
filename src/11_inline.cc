#include <iostream>

using namespace std;

inline void printAB(int a, int b){
	cout<<"a:"<<a<<" b:"<<b<<endl;
}

int main(){
	int a = 1;
	int b = 2;

	for(int i = 0; i<1000; i++){
		a++; b++;
		printAB(a,b);
	}

	return 0;
}

