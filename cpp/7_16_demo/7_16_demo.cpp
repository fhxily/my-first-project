#include <iostream>
using namespace std;

/*
    函数重载
    1.C++为什么支持函数重载，C语言不支持函数重载
    C++代买产生函数符号的时候由函数名和参数列表类型组成
    C代码产生函数符号的时候由函数名来决定！
    2.函数重载需要注意些什么？
    3.C++和C语言代码之间如何互相调用
*/
bool compare(int a, int b)
{
    cout << "compare_int_int" << endl;
    return a > b;
}

bool compare(double a, double b)
{
    cout << "compare_double_double" << endl;
    return a > b;

}

bool compare(const char *a, const char *b)
/*
    const char *a 与 char *a的区别
    char *a可以修改指针里的内容
    const char *a不可以修改指针里的内容
*/
{
    cout << "compare_char*_char*" << endl;
    return strcmp(a, b) > 0;

}
int main()
{
    compare(10, 20);
    compare(10.0, 20.0);
    compare("aaa", "bbb");

    return 0;
}