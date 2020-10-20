/*************************************************
题目描述
计算字符串最后一个单词的长度，单词以空格隔开。
输入描述:
一行字符串，非空，长度小于5000。

输出描述:
整数N，最后一个单词的长度。

示例1
输入
复制
hello world
输出
复制
5
****************************************************/
//#include <iostream>
//#include<vector>
////#include <string.h>
//using namespace std;

//int main()
//{
//    char str[30];
//    int count = 0;
//    cin.getline(str,30);
//    for(int i = strlen(str)-1; i >= 0; i--)
//    {
//        if(str[i] == ' ')
//           break;
//        count++;
//    }
//    cout  << count << endl;
//   // cout << "Hello world!" << endl;
//    return 0;
//}


///*使用动态数组来做，输入的字符串依次存入数组中，
//最后返回数组中最后一个元素（字符串）的长度*/
///*使用动态数组来做，输入的字符串依次存入数组中，
//最后返回数组中最后一个元素（字符串）的长度*/
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(){
//    string input;
//    vector<string>arr;
//    while(cin>>input){
//        arr.push_back(input);
//    }
//    cout<<arr[arr.size()-1].length()<<endl;
//    return 0;
//}

 #include <stdio.h>
 #include <string.h>
 int main()
 {
     char string[100];
     int count = 0;
     int leng; int i;
     char * p;
     p = string;
     puts("intput a string:");
     gets(string);
     leng = strlen(p);
     for(i=leng-1;i>=0&&(string[i] != ' ');i--)
     {count++; }
     printf("%d\n",count);
     return 0;
}

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//    char str[500];
//    int count = 0;
//    gets(str);
//    for(int i = strlen(str)-1;str[i] != ' '; i--)
//        count++;
//    cout << count << endl;
//    return 0;
//}

