/*
题目描述
输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。

输入描述:
输入一个int型整数

输出描述:
按照从右向左的阅读顺序，返回一个不含重复数字的新的整数

示例1
输入

9876673
输出

37689
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
void printNum(int data)
{
    if (data / 10 != 0)
    {
        printNum(data / 10);
    }

    cout << data % 10 << endl;
}

int main()
{
    int num;
    vector<int> arr;
    cin >> num;
     while (num)
    {
        arr.push_back(num % 10);
        num /= 10;
    }
    for (auto beg = arr.begin(); beg != arr.end(); beg++)
    {
        cout << *beg;
    }
    cout << endl;
    reverse(arr.begin(), arr.end()); 
    printNum(num);
    for (auto beg = arr.begin(); beg != arr.end(); beg++)
    {
        cout << *beg;
    }
    cout << endl;
    return 0;
} */
int main()
{
    int num;
    int n;
    int arr[10] = {0};
    cin >> n;
    while(n)
    {
        if(arr[n%10]==0)
        {
            arr[n % 10]++;
            num = num * 10 + n % 10;
        }
        n/=10;
    }
    cout << num << endl;
    return 0;
} 