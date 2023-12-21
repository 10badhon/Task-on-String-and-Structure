#include<iostream>
#include<string.h>
using namespace std;
int main(){
   string str;
   getline(cin,str);
   for(int i=str.length()-1; i>=0; i--){
      cout<<str[i];
   }
   return 0;
   
  /*
   char str[100];
   gets(str);
   int j=strlen(str)-1;
   for(int i=0; i<j; i++){
   char temp;
      temp=str[i];
      str[i]=str[j];
      str[j]=temp;
      j--;
   }
   for(int i=0; i<strlen(str); i++){
      cout<<str[i];
   }
   */
}