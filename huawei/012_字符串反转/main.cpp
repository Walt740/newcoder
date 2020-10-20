/**
 * 题目描述
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）

输入描述:
输入N个字符

输出描述:
输出该字符串反转后的字符串

示例1
输入

abcd
输出

dcba

 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}