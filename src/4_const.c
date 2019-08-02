#include <stdio.h>

void test1(){
	int const a = 1;
	const int b = 2;
	int *p = (int*)&a;
	*p = 2;

	printf("a: %d\n", a);
}

void test2(){
	int a = 1;
	int b = 1;
	int* const ap = &a;  //常量指针  ap指向a，不可以指向其它变量的内存地址，但已指向的内存地址的变量值可以改变。
	const int* bp = &b;  //指针常量  指针可以指向其它内存地址的变量，但已经指向的内存地址的变量不可以改变其值。

	*ap = 2;
	//*bp = 2;  err
	//ap = &b;  err

	
}

void main() {

}
