/*

题目描述
给定n个字符串，请对n个字符串按照字典序排列。
输入描述:
输入第一行为一个正整数n(1≤n≤1000),下面n行为n个字符串(字符串长度≤100),字符串中只含有大小写字母。
输出描述:
数据输出n行，输出结果为按照字典序排列的字符串。

输入:
9
cap
to
cat
card
two
too
up
boat
boot

输出:
boat
boot
cap
card
cat
to
too
two
up

*/

#if 1
#include <stdio.h>
#include <string.h>
int n=0;
char str[1000][100]={0};
char *pstr[1000];

int main()
{
    scanf("%d",&n);
    getchar();  //吸收换行符
    for(int i=0;i<n;i++)
    {
        fgets(str[i],100,stdin);
        pstr[i] = str[i];
    }
    //冒泡法排序
    for(int j=0;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(strcmp(pstr[j],pstr[k])>0)
            {
                char *tmp =NULL;
                tmp = pstr[k];
                pstr[k] = pstr[j];
                pstr[j] = tmp;
            }
        }
    }

    //排序后输出
    for(int i=0;i<n;i++)
        printf("%s\n",pstr[i]);
    return 0;
}
#else

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int num;
    string str;
    cin>>num;
    vector<string> vec;
    for(int i=0;i<num;i++)
    {
        cin>>str;
        vec.push_back(str);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<num;i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}

#endif



