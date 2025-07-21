#include<stdio.h>
int main_03()
/*
	const修饰的量，可以不用初始化
	const int a
	它不叫常量，叫做常变量
*/
{
	const int a = 0;

	int* p = (int*)&a;
	*p = 10;
	printf("%d, %d, %d\n", a, *p, *(&a));
	//10 10 10
	return 0;
}
