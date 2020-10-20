/*
 * 
 * 题目描述
数据表记录包含表索引和数值（int范围的整数），请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。

输入描述:
先输入键值对的个数
然后输入成对的index和value值，以空格隔开

输出描述:
输出合并后的键值对（多行）

示例1
输入

4
0 1
0 2
1 2
3 4
输出

0 3
1 2
3 4
 * 
 * 
 * 
 */

#include <iostream>
#include <string.h>
#include <vector>
#include <map>
using namespace std;
/* int main()
{
    int num;
    int index, value;
    int arr[100];
    memset(arr, 0, sizeof(arr));
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        //scanf("%d %d",&index,&value);
        cin >> index >> value;
        arr[index] += value;
    }
    for (int j = 0; j < 100; j++)
    {
        if (arr[j] != 0)
        {
            cout << j << " " << arr[j] << endl;
        }
    }

    return 0;
} */

int main()
{
    map<int, int> imap;
    int num, key, value;
    cin >> num;
    while (num-- && cin >> key >> value)
        imap[key] += value;
    for (auto beg = imap.begin(); beg != imap.end(); beg++)
        cout << beg->first << " " << beg->second << endl;
    return 0;
}