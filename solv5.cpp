#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string str1;
    getline(cin,str1);
    if(str.compare(str1)==0){
        cout<<" same ";
     }
    else{
        cout<<"not same";
    }
    return 0;

   /*
   char str[100];
   char str1[100];
   gets(str);
   gets(str1);
   if(strcmp(str,str1)==0){
    cout<<" same ";
   }
   else {
    cout<<" not same ";
   }
   */
}