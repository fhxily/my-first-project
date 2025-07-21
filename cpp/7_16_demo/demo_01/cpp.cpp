#include <iostream>
using namespace std;

/*

	C++调用C代码：无法直接调用！怎么办：  把C函数的声明扩在extern中
*/
//extern "C" //用C的规则来生成符号sum
//{
//	int sum(int a, int b);
//}

#ifdef __cplusplus //这段放在C代码也可以用，因为C不会识别它，在C和C++通用。会生成C接口的函数
extern "C" {
#endif
	int sum(int a, int b);

#ifdef __cplusplus
}
#endif


int main()
{
	int ret = sum(10, 20);
	cout << "ret = " << ret << endl;
	return 0;
}