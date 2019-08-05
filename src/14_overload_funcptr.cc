#include <iostream>

using namespace std;

int func(int a, int b){
	cout<<"func"<<endl;
	cout<<a<<" "<<b<<endl;
}

typedef int(MYFUNC)(int, int);

typedef int(*MYFUNC_P)(int, int);

int main(){
	MYFUNC *fp = NULL;

	fp = func;
	fp(1, 2);

	MYFUNC_P pf = NULL;
	pf = func;

	pf(2,3);

	return 0;
}

