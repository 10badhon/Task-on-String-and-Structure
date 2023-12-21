#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int sum=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'){
            ++sum;
        }
    }
    cout<<"vowels appeared "<<sum<<" times";
    return 0;
    
    /*
    char str[100];
    gets(str);
    int sum=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'){
            ++sum;
        }
    }
    cout<<"vowels appeared "<<sum<<" times";
    */
}