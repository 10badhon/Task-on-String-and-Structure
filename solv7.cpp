#include<iostream>
using namespace std;
struct Student{
  int id;
  string name;
  double cgpa;
  char gender;
  int creditCompleted;
  string department;
  bool checkProbation(){
       return cgpa<2.5;
  }
  void show(){
    cout<<"Student details : "<<endl;
  cout<<"ID \t"<<id<<endl;
  cout<<"NAME \t"<<name<<endl;
  cout<<"CGPA \t"<<cgpa<<endl;
  cout<<"GENDER \t"<<gender<<endl;
  cout<<"TOTAL CREDIT DONE \t"<<creditCompleted<<endl;
  cout<<"DEPERTMENT \t"<<department<<endl;
  }


};
int main(){
    Student cse[5]={
    {701, "TANVIR", 3.4, 'M', 124, "CSE"},
    {205, "AHMED", 2.4, 'M', 80, "CSE"},
    {444, "BADHON", 2.7, 'M', 30, "CSE"},
    {123, "SHAWON", 3.2, 'M', 40, "CSE"},
    {555, "SADMAN", 2.3, 'M', 20, "CSE"}
  };
    
    for(int i=0; i<5; i++)
    if(cse[i].checkProbation()){
        cout<<"Probation : "<<endl;
        cse[i].show();
    }
   return 0;
}