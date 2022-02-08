#include <iostream>

using namespace std;

bool returnToOrigin(string str,int length){
    int horizontal=0,vertical=0;
    for (int i = 0; i < length; i++) {
        switch(str[i]){
            case 'L':
                horizontal--;
                break;
            case 'R':
                horizontal++;
                break;
            case 'U':
                vertical++;
                break;
            case 'D':
                vertical--;
                break;
        }
    }
    if(horizontal==0 && vertical==0){
        return true;
    }
    return false;
}

int main()
{
    string str;
    cin>>str;
    cout<<returnToOrigin(str,str.length());
    return 0;
}
