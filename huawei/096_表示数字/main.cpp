/*
题目描述
将一个字符中所有出现的数字前后加上符号“*”，其他字符保持不变
public static String MarkNum(String pInStr)
{
    return null;
}
注意：输入数据可能有多行
输入描述:
输入一个字符串

输出描述:
字符中所有出现的数字前后加上符号“*”，其他字符保持不变

示例1
输入

Jkdi234klowe90a3
输出

Jkdi*234*klowe*90*a*3*
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        for (int i = 0; i < str.size(); i++)
        {
            int find = 0;
            if (isdigit(str[i]))
            {
                str.insert(i, "*"); 
                i++;
            }
            while (isdigit(str[i]))
            {
                find = i + 1;
                i++;
            }
            if (find)
                str.insert(find, "*");
        }
        cout << str << endl;
    }
    return 0;
}
