
/*
 他是这么变换的，大家都知道手机上的字母： 1--1， abc--2, def--3, ghi--4, jkl--5, mno--6, pqrs--7, tuv--8 wxyz--9, 0--0,就这么简单，渊子把密码中出现的小写字母都变成对应的数字，数字和其他的符号都不做变换，
 YUANzhi1987
 zvbo9441987
 
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string dict1="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
string dict2="bcdefghijklmnopqrstuvwxyza22233344455566677778889999";

char alpha2num(char chr)
{
//    switch(chr)
//    {
//        case 'a':
//        case 'b':
//        case 'c':  return '2';
//        case 'd':
//        case 'e':
//        case 'f':  return '3';
//        case 'g':
//        case 'h':
//        case 'i':  return '4';
//        case 'j':
//        case 'k':
//        case 'l':  return '5';
//        case 'm':
//        case 'n':
//        case 'o':  return '6';
//        case 'p':
//        case 'q':
//        case 'r':
//        case 's':  return '7';
//        case 't':
//        case 'u':
//        case 'v':  return '8';
//        case 'w':
//        case 'x':
//        case 'y':
//        case 'z':  return '9';
//        default:   return chr;
//    }
    for(int i=0;i<dict1.size();i++)
    {
        if(chr == dict1[i])
            return dict2[i];
    }
    return chr;
}


int main(){
    
    string str;
    cin >> str;
    
    for(int i=0;i<str.length();i++)
    {
//        if(str[i]>='A' && str[i]<='Z')
//        {
//            str[i] = str[i]+32+1;
//            if(str[i] == '{')
//                str[i] = 'a';
//        }
//        else if(str[i]>='a' && str[i]<='z')
//        {
            str[i] = alpha2num(str[i]);
//        }
//        else
//        {
//            continue;
//        }
    }
    
    cout << str << endl;
    
}
