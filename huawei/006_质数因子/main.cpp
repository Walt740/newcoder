
/*

��Ŀ����
����:����һ�������������մ�С�����˳������������������ӣ���180��������Ϊ2 2 3 3 5 ��

���һ��������ҲҪ�пո�

��ϸ������


�����ӿ�˵����

public String getResult(long ulDataInput)

���������

long ulDataInput�������������

����ֵ��

String



��������:
����һ��long������

�������:
���մ�С�����˳����������������������ӣ��Կո���������һ��������ҲҪ�пո�

ʾ��1
����

180
���

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
