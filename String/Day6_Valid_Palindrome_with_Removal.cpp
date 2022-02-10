#include <iostream>

using namespace std;

bool isPallindromeWithRemoval(string str,int length){
    bool flag = true;
    int removal=1;
    int start =0,end=length-1;
    while(start<=end){
        if(str[start]==str[end]){
            start++;
            end--;
        }
        else{
            if(removal==1 && str[start+1]==str[end]){
                removal=0;
                start++;
            }
            else if(removal==1 && str[start]==str[end-1]){
                removal=0;
                end--;
            }
            else if (removal==0){
                flag=false;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    string str;
    cin>>str;
    cout<<isPallindromeWithRemoval(str,str.length());
    return 0;
}
