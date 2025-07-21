#include <iostream>

using namespace std;
inline int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int a = 10;
    int b =20;

    int ret = sum(a, b);
    /*
    此处调用函数右标准的函数调用过程<参数压栈，函数栈帧的开辟和退回过程>
    有函数调用的开销
    如果需要对一个函数进行频繁的调用，其中这个函数本身的内容却过于简单，这使函数调用的开销远大于函数本身的内容。
    此时就可以使用内联函数
    */
   cout << "ret = " << ret << endl;
    return 0;
}