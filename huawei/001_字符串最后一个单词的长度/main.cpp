/*************************************************
��Ŀ����
�����ַ������һ�����ʵĳ��ȣ������Կո������
��������:
һ���ַ������ǿգ�����С��5000��

�������:
����N�����һ�����ʵĳ��ȡ�

ʾ��1
����
����
hello world
���
����
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


///*ʹ�ö�̬����������������ַ������δ��������У�
//��󷵻����������һ��Ԫ�أ��ַ������ĳ���*/
///*ʹ�ö�̬����������������ַ������δ��������У�
//��󷵻����������һ��Ԫ�أ��ַ������ĳ���*/
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

