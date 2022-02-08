#include <iostream>

using namespace std;


bool isPallindrome(string str,int length){
    bool flag = true;
    for (int i = 0; i < length/2; i++) {
        if(str[i]!=str[length-i-1]){
            flag=false;
        }
    }
    return flag;
}

int main()
{
    string str;
    cin>>str;
    cout<<isPallindrome(str,str.length());
    return 0;
}
