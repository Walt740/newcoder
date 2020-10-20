
/*

题目描述
功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（如180的质因子为2 2 3 3 5 ）

最后一个数后面也要有空格

详细描述：


函数接口说明：

public String getResult(long ulDataInput)

输入参数：

long ulDataInput：输入的正整数

返回值：

String



输入描述:
输入一个long型整数

输出描述:
按照从小到大的顺序输出它的所有质数的因子，以空格隔开。最后一个数后面也要有空格。

示例1
输入

180
输出

2 2 3 3 5
*/
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    long num;
//    while(cin >> num)
//    {
//
//    }
//
//
//
//    return 0;
//}
#include "stdio.h"

void factor(long num,long zhi)
{
    if(num%zhi != 0)
    {
        factor(num,zhi+1);
        return ;
    }
    printf("%ld ",zhi);
    if(num > zhi)
    {
        factor(num/zhi,zhi);
    }
    return;
}

int main()
{
  long n,i;
  while(scanf("%ld",&n)!= EOF)
  {
//    for(i=2;i<=n;i++)
//    {
//        while(n!=i)
//        {
//          if(n%i==0)
//          {
//            printf("%ld ",i);
//            n=n/i;
//          }
//          else
//            break;
//        }
//    }
//    printf("%ld \n",n);
     factor(n,2);
  }
  return 0;
}
