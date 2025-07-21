#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int temp = a + b;
    return temp;
}

int main()
{
    int a = 10;
    int b = 20;
    
    int ret = sum(a, b);
    cout<< "ret = " << ret << endl;
    return 0;
}