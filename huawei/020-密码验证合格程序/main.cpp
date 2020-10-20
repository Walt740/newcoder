/*
题目描述
密码要求:

1.长度超过8位
2.包括大小写字母.数字.其它符号,以上四种至少三种
3.不能有相同长度大于等于2的子串重复

输入描述:
一组或多组长度超过2的子符串。每组占一行

输出描述:
如果符合要求输出：OK，否则输出NG

示例1
输入

021Abc9000
021Abc9Abc1
021ABC9000
021$bc9000
输出

OK
NG
NG
OK


*/
#if 0



#include<stdio.h>
#include <ctype.h>
#include <string.h>
int length_check(char *str)
{
    if(strlen(str) <= 8)
    {
        return -1;
    }
    return 0;
}
 
int type_check(char *str)
{
    int num = 0;
    char *temp = str;
    while(*(temp++) != '\0')
    {
        if( isdigit(*temp))
        {
            num++;
            break;
        }
    }
    temp = str;
    while(*(temp++) != '\0')
    {
        if( isalpha(*temp))
        {
            num++;
            break;
        }
    }
    temp = str;
    while(*(temp++) != '\0')
    {
        if( !isalnum(*temp))
        {
            num++;
            break;
        }
    }
   if (num < 3)
   {
       return -1;
   }
    return 0;
}
 
int repeat_check(char *str)
{
    char temp[4];
    temp[3] = '\0';
    for(;*(str+2) != '\0'; str++)
    {
        memcpy(temp, str, 3);
        if (strstr(str+3, temp)!=NULL)
        {
            return -1;
        }
    }
    return 0;
}
 
 
 
int main (int argc, char **argv)
{
    char pass[200] = {0};
    int ret = 0;
    while(gets(pass) != NULL)
    {
        ret+=length_check(pass);
        ret+=repeat_check(pass);
        ret+=type_check(pass);
    ret != 0 ? printf("NG\n") : printf("OK\n");
        ret = 0;
    }    
    return 0;
}



#else

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_length(const char* instr)
{
    if(strlen(instr) > 8) return 0;
    else return -1;
}

int check_type(char * instr)
{
    int type[4]={0};
    for(int i=0; instr[i]!= '\0';i++)
    {
        if(instr[i] >= 'a' && instr[i] <= 'z')
        {
            type[0] = 1;
        }
        else if(instr[i] >= 'A' && instr[i] <= 'Z')
        {
            type[1] = 1; 
        }
        else if(instr[i] >= '0' && instr[i] <= '9')
        {
            type[2] = 1; 
        }
        else
        {
            type[3] = 1; 
        }
    }
    if(type[0]+ type[1]+type[2]+type[3] >= 3) return 0;
    else return -1;
}

 int check_repeat(char *instr)
{
    char tmp[4];
    tmp[3] = '\0';
    for(;*(instr+2) != '\0'; instr++)
    {
        memcpy(tmp,instr,3);
        if(strstr(instr+3,tmp) != NULL)
        {
            return -1;
        }
    }
    return 0;
} 

#if 1
 int main()
{
    char str[100]={0};
    int ret = 0;
    while(gets(str) != NULL)
    {
        if(strlen(str) > 8 && !check_type(str) && !check_repeat(str)) 
            printf("OK\n");
        else 
            printf("NG\n");
    }
    return 0;
} 
#else

int main (int argc, char **argv)
{
    char pass[200] = {0};
    int ret = 0;
    while(gets(pass) != NULL)
    {
        ret+=check_length(pass);
        ret+=check_type(pass);
        ret+=check_repeat(pass);
        ret != 0 ? printf("NG\n") : printf("OK\n");
        ret = 0;
    }    
    return 0;
}

#endif
#endif