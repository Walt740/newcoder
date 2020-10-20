/*
题目描述
输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。

输入描述:
 输入一个整数（int类型）

输出描述:
 这个数转换成2进制后，输出1的个数

输入
5
输出
2


*/

#if 0
#include <stdio.h>

int main()
{
    int d;
    int num=0;
    scanf("%d",&d);
    while(d)
    {
       if(d%2)
       {
           num++;
       } 
       d /= 2;    
    }
    printf("%d\n",num);
    return 0;

}
#else

#include <iostream>
using namespace std;

int main()
{
    int num=0;
    int count=0;

    cin >> num;

    while(num>0)
    {
        if(num&0x01)
        {
            count++;
        }
        num >>= 1;
    }
    cout << count << endl;

    return 0;
}

#endif