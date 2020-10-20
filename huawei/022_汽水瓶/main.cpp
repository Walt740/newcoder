/*
 题目描述
 有这样一道智力题：“某商店规定：三个空汽水瓶可以换一瓶汽水。小张手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？”答案是5瓶，
 方法如下：先用9个空瓶子换3瓶汽水，喝掉3瓶满的，
 喝完以后4个空瓶子，用3个再换一瓶，喝掉这瓶满的，
 这时候剩2个空瓶子。然后你让老板先借给你一瓶汽水，喝掉这瓶满的，
 喝完以后用3个空瓶子换一瓶满的还给老板。如果小张手上有n个空汽水瓶，
 最多可以换多少瓶汽水喝？
 输入描述:
 输入文件最多包含10组测试数据，每个数据占一行，仅包含一个正整数n（1<=n<=100），表示小张手上的空汽水瓶数。n=0表示输入结束，你的程序不应当处理这一行。
 
 输出描述:
 对于每组测试数据，输出一行，表示最多可以喝的汽水瓶数。如果一瓶也喝不到，输出0。
 
 示例1
 输入
 
 3
 10
 81
 0
 输出
 1
 5
 40
 
 */


//#include <iostream>
//#include <vector>
//using namespace std;

//int main()
//{
//    int num,total=0;
//    vector<int> nums;
//    vector<int> outs;
//    while(cin >> num)
//    {
//        nums.push_back(num);
//    }
//    for(int i=0;i<nums.size();i++)
//    {
//        if(nums[i]==0)
//            outs.push_back(0);
//
//        while(nums[i]/3!=0)
//        {
//            total += nums[i]/3;
//            nums[i] = nums[i] / 3 + nums[i] % 3;
//            if(nums[i]==2)
//                nums[i]+=1;
//        }
//        outs.push_back(total);
//        total = 0;
//
//    }
//    for(int i=0;i<outs.size();i++)
//        cout << outs[i] << endl;
//}
/*
 
 规律就是：
 如果是n个空瓶换一杯水，那么就说明n-1空瓶就可以喝一份水，如果有m个空瓶，那么可以喝到m/(n-1)份水

 */

#include<iostream>
using namespace std;
 
int main()
{
    int n=10;
    while (cin >> n && n != 0)
    {
        int a =n/2;
        cout << a << endl;
 
    }
    return 0;
    
}
