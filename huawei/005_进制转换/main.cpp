/**************************************************************
题目描述
写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。（多组同时输入 ）

输入描述:
输入一个十六进制的数值字符串。

输出描述:
输出该数值的十进制字符串。

示例1
输入
0xA
输出
10
***************************************************************/

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//int main()
//{
//    char hex[1000];
//    unsigned int value;
//    while(cin >> hex )
//    {
//       sscanf(hex,"%x",&value);
//       cout << value << endl;
//    }
//    return 0;
//}


#include <iostream>
using namespace std;

int main()
{
    char hex[1000];
    char *ptr;
    long int val;

    while(cin.getline(hex,1000))
    {
        val = strtol(hex,&ptr,16);
        cout << val <<endl;
    }
    return 0;
}

