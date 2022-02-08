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

string binaryAddition(string str1,string str2){
    string result;
    int i=0,j=0,carry=0;
    while(str1[i]!='\0'&&str2[j]!='\0'){
        if(carry==0){
            if(str1[i]=='0'&& str2[j]=='0'){
                result+='0';
                carry=0;
            }
            else if((str1[i]=='0'&& str2[j]=='1')||(str1[i]=='1'&& str2[j]=='0')){
                result+='1';
                carry=0;
            }
            else{
                result+='0';
                carry=1;
            }
        }
        else{
            if(str1[i]=='0'&& str2[j]=='0'){
                result+='1';
                carry=0;
            }
            else if((str1[i]=='0'&& str2[j]=='1')||(str1[i]=='1'&& str2[j]=='0')){
                result+='0';
                carry=1;
            }
            else{
                result+='1';
                carry=1;
            }
            
        }
        i++;
        j++;
    }
    while(str1[i]!='\0'){
        if(carry==1){
            if(str1[i]=='0'){
                result+='1';
                carry=0;
            }
            else{
                result+='0';
                carry=1;
            }
        }
        else{
            result+=str1[i];
        }
        i++;
    }
    while(str2[j]!='\0'){
        if(carry==1){
            if(str2[j]=='0'){
                result+='1';
                carry=0;
            }
            else{
                result+='0';
                carry=1;
            }
        }
        else{
            result+=str2[j];
        }
        j++;
    }
    if(carry==1){
        result+='1';
    }
    return reverse(result,result.length());
    
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    cout<<binaryAddition(reverse(str1,str1.length()),reverse(str2,str2.length()));
    return 0;
    
}
