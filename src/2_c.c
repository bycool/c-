#include <stdio.h>

int vala;  //bss
int vala = 20;   //gcc会把这句认定为vala=20

f(int a){
	return 10;
}

g(){
	return 10;
}

void main() {
	printf("vala: %d\n", vala);
	int a;
//	a = f();  有型参的函数不传参数会报错。
//	printf("f(): %d\n", a);

	a = g(1,2,3,4,5);

	a = f(1,2,3,4,5,6);  //有型参的函数，多传参数会报错
	printf("f(): %d\n", a);
}
