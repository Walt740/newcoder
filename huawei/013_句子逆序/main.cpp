

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    vector<string> sentence;
    while(cin >> str)
    {
        sentence.push_back(str);
    }
    reverse(sentence.begin(),sentence.end());
    for(auto beg=sentence.begin(); beg != sentence.end(); beg++)
        cout << *beg <<" ";
    cout << endl;
    return 0;
}