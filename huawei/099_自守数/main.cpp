/*

题目描述
自守数是指一个数的平方的尾数等于该数自身的自然数。例如：25^2 = 625，76^2 = 5776，9376^2 = 87909376。请求出n以内的自守数的个数

接口说明
功能: 求出n以内的自守数的个数
输入参数：int n
返回值：n以内自守数的数量。

public static int CalcAutomorphicNumbers( int n)
{
//在这里实现功能

return 0;
}
本题有多组输入数据，请使用while(cin>>)等方式处理

输入描述:
int型整数

输出描述:
n以内自守数的数量。

示例1
输入
2000
输出
8
*/


/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    long num;
    while(cin >> num)
    {
        long count=0;
        for(long i = 0; i<= num; i++)
        {
            long y = i * i;
            string str1,str2;
            str1 = to_string(i);
            str2 = to_string(y);
            int pos = str2.size() - str1.size();
            if(str2.find(str1,pos) != -1 )
                count ++ ;
        }
        cout << count << endl ;
    }
    return 0;
}

*/


#include <iostream>

using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        int base = 10;
        int count = 0;
        for(int i = 0; i<= num; i++)
        {
            if(i == base) base *= 10;
            if(i*i%base == i)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}