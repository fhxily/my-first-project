#include<iostream>
#include<typeinfo>
using namespace std;

/*
	const和一级指针的结合
	c++的语言规范：const修饰的是离它最近的类型
	const int *p;	*p = 20不被允许，p = &b可以
	可以任意指向不同的int类型的内存，但是不能通过指针间接修改指向的内存的值
	
	int const* p;

	int *const p;
	指针P是常量，不能再指向其它内存。但是可以通过指针解引用修改指向内存的值

	const int *const p;
	非常严格

	const修饰的量 叫常量
	与普通变量的区别是什么？	C++有两种区别1.编译方式不同2.不能作为左值

	const修饰的量常出现的错误是：
	1.常量不能作为左值
	2.不能把常量的地址泄露给一个普通的指针或者普通的引用变量//
	
	类型转换公式
	const int *  <= int *   正确的
	int *  <=  const int *  错误的 

	int ** <= const int**	错误的
	const int** <= int**	错误的

	int ** <= int *const*	错误的
	int *const* <= int **	正确的
*/
/*
	const和二级指针的结合




*/
int main()
{
	//const int a = 10;
	//int b;
	//int* p = &b;
	//const int a = 10;

	int* q1 = nullptr;
	int* const q2 = nullptr;
	cout << typeid(q1).name() << endl;
	cout << typeid(q2).name() << endl;
	// const如果右边没有指针*的话，const是不参与类型的


	return 0;
}