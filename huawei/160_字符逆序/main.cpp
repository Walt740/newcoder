//
//  main.cpp
//  testc
//
//  Created by 蓝 on 2020/7/25.
//  Copyright © 2020 蓝. All rights reserved.
//

/*
 题目描述
 将一个字符串str的内容颠倒过来，并输出。
 str的长度不超过100个字符。
 如：输入“I am a student”，输出“tneduts a ma I”。

 输入参数：
 inputString：输入的字符串

 返回值：
 输出转换好的逆序字符串
 
 输入描述:
 输入一个字符串，可以有空格

 输出描述:
 输出逆序的字符串

 示例1
 输入
 I am a student
 输出
 tneduts a ma I
 */


#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    //cout << str << endl;
    reverse(str.begin(),str.end());
    cout << str << endl;
    return 0;
}


#else

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    //str[strlen(str)] = '\0';
    //printf("%s",str);

    for(int i=strlen(str)-1;i>=0; i--)
        printf("%c",str[i]);

    return 0;
}


/*
#include<stdio.h>
int main ()
{
	int i, j=0;
	char str [80];
	while ((str [i]=getchar( ))!='\n')
		i++;
	str [i] ='\0';
	for (j=i-1;j>=0;j--)
		printf ("%c",str [j]);
	return 0;		
 }
*/
#endif
