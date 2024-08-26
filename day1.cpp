#include<iostream>
#include<string>
using namespace std;
int main(){
   //first question :
   string str1;
   cout<<"Enter the first string: " ;
   cin>>str1;
   string str2;
   cout<<"Enter the second string: " ;
   cin>>str2;
   cout<<"concatenated string: ";
   cout<<str1<<str2;
   //second question;
   int grade1 , grade2 , grade3 , grade4,grade5;
   cout<<"Enter grade 1:";
   cin>>grade1;
   cout<<"Enter grade 2:";
   cin>>grade2;
   cout<<"Enter grade 3:";
   cin>>grade3;
   cout<<"Enter grade 4:";
   cin>>grade4;
   cout<<"Enter grade 5:";
   cin>>grade5;
   double avg = (grade1+grade2+grade3+grade4+grade5)/5.0;
   cout<<"Average of 5 grades: "<<avg;
   //3 question:
   int n;
   cout<<"Enter the number: ";
   cin>>n;
   cout<<"The square of a  number: "<<n*n;


}