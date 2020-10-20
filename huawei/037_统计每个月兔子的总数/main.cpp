#include <iostream>

using namespace std;

int getTotalCount(int monthCount)
{
    //解法1：递归
    //f(n) = f(n-1) + f(n-2) 
#if 1
    if(monthCount < 3)
    {
        return 1;
    }
    return getTotalCount(monthCount - 1) + getTotalCount(monthCount - 2);
 #else
    //解法2：循环
    int a = 1, b = 0, c = 0; //a:一个月兔子数，b：两个月兔子数，c：三个月兔子个数
    while(--m)
    {
        c += b;
        b = a;
        a = c;
    }
    return a+b+c;
#endif
}

int main()
{
    int month;
    while (cin >> month)
    {
        cout << getTotalCount(month) << endl;
    }
}