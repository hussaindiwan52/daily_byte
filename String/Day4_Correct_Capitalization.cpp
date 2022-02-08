#include <iostream>

using namespace std;

bool isUpper(char c){
    if(c>='A'&& c<='Z'){
        return true;
    }
    return false;
}

bool allUpper(string str,int length){
    for (int i = 0; i < length; i++) {
        if(!isUpper(str[i])){
            return false;
        }
    }
    return true;
}
bool allLower(string str,int length){
    for (int i = 0; i < length; i++) {
        if(isUpper(str[i])){
            return false;
        }
    }
    return true;
}
bool firstCapital(string str,int length){
    if(isUpper(str[0])){
        for (int i = 1; i < length; i++) {
            if(isUpper(str[i])){
                return false;
            }
        }
        return true;
    }
    return false;
}

bool correctCapitalization(string str,int length){
    if(allUpper(str,length)||allLower(str,length)||firstCapital(str,length)){
        return true;
    }
    return false;
}

int main()
{
    string str;
    cin>>str;
    cout<<correctCapitalization(str,str.length());
    return 0;
}
