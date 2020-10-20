
/*
 * 
 * 题目描述
描述：

输入一个整数，将这个整数以字符串的形式逆序输出

程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001

输入描述:
输入一个int整数
输出描述:
将这个整数以字符串的形式逆序输出

示例1
输入  1516000
输出  0006151
 */



    // #include <iostream>

    // using namespace std;
    // int main()
    // {
    //     int num;
    //     cin >> num;

    //     string str = to_string(num);
    //     reverse(str.begin(),str.end());

    //     cout << str << endl;

    //     return 0;
    // }




#include <stdio.h>
int main()
{
    int a; scanf("%d", &a);
    do printf("%d", a%10), a /= 10; // 注意这里只有一条语句 不用加花括号
       while(a); // do while才能在输入等于0时输出 感谢@牛客122438009号指正
    return 0;    // P.P.S. 然而牛客的测试用例并没有考察输入为0的边界情况
}