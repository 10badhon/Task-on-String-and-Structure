#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    string str1;
    cout<<"input 1 : "; getline(cin,str);
    cout<<"input 2 : "; getline(cin,str1);
    string s=str+str1;
    cout<<s;
    //str.append(str1);
    //cout<<str;
    return 0;

    /*
    char str[100];
    char str1[100];
    gets(str);
    gets(str1);
    strcat(str,str1);
    cout<<str;
    */ 
}
