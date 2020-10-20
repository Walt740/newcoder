#include <iostream>
#include <string>
#include <vector>
//#include <bits/stdc++.h>
#include <sstream>

using namespace std;
bool IpStrToUint(string &ip,unsigned int &num)
{
    for(auto &c : ip)
    {
        if(c == '.')
        {
            c = ' ';
        }
    }
    stringstream ss(ip);
    vector<int> seg;
    unsigned int val = 0;
    while(ss>>val)
    {
        seg.push_back(val);
    }
    if(seg.size() != 4)
    {
        return false;
    }
    for(auto i:seg)
    {
        if(i>255 || i<0)
            return false;
    }
    num = seg[0] << 24 | seg[1] << 16 | seg[2] << 8 | seg[3] << 0;
    return true;
}



int main()
{
    string mask,ip1,ip2;
    while(cin >> mask >> ip1 >> ip2)
    {
        unsigned int num1,num2,masknum;
        if(IpStrToUint(ip1, num1) && IpStrToUint(ip2, num2) && IpStrToUint(mask, masknum))
        {
            if((num1 & masknum) == (num2 & masknum)) 
            {
                cout << "0" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
        else{
            cout << "1" << endl;
        }
    }
        
        
        
        
        
        
        
        
        
        
}