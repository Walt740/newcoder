/*
题目描述
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。

输入描述:
输入N个字符，字符在ACSII码范围内。

输出描述:
输出范围在(0~127)字符的个数。

示例1
输入

abc
输出

3
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// int main()
// {
//     string str;
//     int num=0;
//     cin >> str;
//     sort(str.begin(),str.end());
//     auto end = unique(str.begin(),str.end());
//     for (auto beg = str.begin(); beg!=end; beg++)
//         if(*beg>0 && *beg<127)
//             num++;
//     cout << num << endl;
//     return 0;
// }
#include <set>
#include <string>

/* int main()
{
    string s;
    //getline(cin, s);
    cin >> s;
    set<char> sset;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>=0 && s[i]<=127) sset.insert(s[i]);
    }
    cout << sset.size() << endl;
    return 0;
} */


int main()
{
    int arr[127]={0};
    int num=0;
    char c;
    while(cin >> c)
    {
        arr[c]++;
        if(arr[c]==1) num++; 
    }
    cout << num << endl;
}