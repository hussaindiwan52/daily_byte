#include <iostream>

using namespace std;

string commonPrefix(string arr[],int len){
    int i=0,j=0;
    string prefix="";
    while(arr[0][i]!='\0' && arr[len-1][j]!='\0'){
        if(arr[0][i]==arr[len-1][j]){
            prefix+=arr[len-1][j];
        }
        else{
            break;
        }
        i++;
        j++;
    }
    return prefix;
}

int main()
{
    string arr[] = {"colorado", "color", "cold"};
    int len=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    cout<<commonPrefix(arr,len);
    return 0;
    
}
