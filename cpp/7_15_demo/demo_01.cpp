#include <iostream>
using namespace std;

int sum(int a, int b = 20);
int sum(int a = 10, int b);

int main()
{
    int a = 10;
    int b = 20;

    int ret = sum(a, b);
    /*
        mov eax, dword ptr[ebp-8]
        push eax
        mov eax, dword ptr[ebp-4]
        push eax
        call sum
    */
    cout << "ret = " << ret << endl;

    
     ret = sum(a);
    /*
        push 14H
        mov ecx, dword ptr[ebp-4]
        push ecx
        call sum
    */
   
    ret = sum();
    /*
        push 14H
        push 0AH
        call sum
    */
  
     ret = sum(a, 40);
    /*
        push 28H
        mov ecx, dword ptr[ebp-4]
        push ecx
        call sum
    */
    return 0;
}
        int sum(int a, int b)
        {

            return a + b;
        }