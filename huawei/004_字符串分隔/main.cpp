/*
    题目描述
•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
输入描述:
连续输入字符串(输入2次,每个字符串长度小于100)

输出描述:
输出到长度为8的新字符串数组

示例1
输入
abc
123456789
输出
abc00000
12345678
90000000
*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    char str[1000];
    char temp[9];
    temp[8]='\0';
    int cptime;
    while(cin.getline(str,1000))
    {
        cptime = !(strlen(str)%8) ? strlen(str)/8:strlen(str)/8 + 1;
        for(int i=0;i<cptime;i++)
        {
            memset(temp,'0',8);
            memcpy(temp,&str[8*i],strlen(&str[8*i])>8 ? 8:strlen(&str[8*i]));
            cout << temp << endl;
        }
    }
    return 0;
}