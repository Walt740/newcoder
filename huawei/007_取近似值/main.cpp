/*
题目描述
写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。

输入描述:
输入一个正浮点数值

输出描述:
输出该数值的近似整数值

示例1
输入
5.5
输出
6
*/

#include <iostream>
using namespace std;

int main()
{
    float num;
/*     int a;
    while (cin >> num)
    {
        a = int(num * 10) % 10;
        if (a >= 5)
            cout << (int)num + 1 << endl;
        else
            cout << (int)num << endl;
    } */

    cin >> num;
    cout << (int)(num+0.5f) << endl;
    return 0;
}