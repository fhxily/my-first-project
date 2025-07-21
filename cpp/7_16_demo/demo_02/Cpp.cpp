#include <iostream>
#include <typeinfo>

/*
const 指针 引用 在函数当中的引用
const怎么理解?
const 修饰的变量不能够再作为左值！！！初始化完成之后，值不能被修改（可以通过其它方式修改，比如指针）

c和c++中的const的区别是什么？
const的编译方式不同，C中，const就是当作一个变量来编译生成指令的。
C++在编译过程中，所有出现const常量名字的地方，都被常量的初始化替换了！！

c++中的const必须初始化，叫常量

int b = 20;
const int a = b;
此时叫常变量  因为初始值不是立即数，是一个变量，和c语言中的一样了

*/
using namespace std;
int main()
{
	const int a = 20;
	int array[a] = {};

	int* p = (int*)&a;
	*p = 30;		//a里的值已经被替换了

	printf("%d, %d, %d\n", a, *p, *(&a));

	return 0;
}