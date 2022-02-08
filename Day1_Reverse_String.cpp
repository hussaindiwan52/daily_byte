#include <iostream>

using namespace std;

void swap(char* c1,char* c2){
    char *temp=c1;
    c1=c2;
    c2=temp;
}

string reverse(string str,int length){
    for (int i = 0; i < length/2; i++) {
        swap(str[i],str[length-i-1]);
    }
    return str;
}

int main()
{
    string str;
    cin>>str;
    cout<<"Before Reversing :- "<<str<<endl;
    cout<<"After Reversing :- "<<reverse(str,str.length());;
    return 0;
}
