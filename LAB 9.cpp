#include <iostream>
using namespace std;
int main(){
int Num1, Num2;
    cout<<"Enter first Number: ";
    cin>>Num1;
    cout<<"Enter Second Number: ";
    cin>>Num2;
    int sum = Num1 + Num2;
    cout<<"Your Sum is : "<<sum;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int PF,DS,AICT,ENG;
    int sum = PF+DS+AICT+ENG;
    cout<<"Enter your marks in PF: ";
    cin>>PF;
     cout<<"Enter your marks in DS: ";
    cin>>DS;
     cout<<"Enter your marks in AICT: ";
    cin>>AICT;
     cout<<"Enter your marks in ENG: ";
    cin>>ENG;
    int avg= sum/4;
    cout<<"Your Average marks are: "<<avg;
    return0;
}
#include <iostream>
using namespace std;
int main(){
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    
    cout<<"Enter Your Marks in PF: "<<endl;
    cin>>marks1;
     cout<<"Enter Your Marks in DS: "<<endl;
    cin>>marks2;
     cout<<"Enter Your Marks in AICT: "<<endl;
    cin>>marks3;
     cout<<"Enter Your Marks in ENG: "<<endl;
    cin>>marks4;
    int per1 =(marks1/100)*100; 
    int per2 =(marks1/100)*100; 
    int per3 =(marks3/100)*100; 
    int per4 =(marks4/100)*100; 
    cout<<"Sr  Subject  Obtain Marks  Total MARKS  PERCENTAGE"<<endl;
    cout<<"01  PF                "<<marks1<<"      100       "<<(marks1/100)*100<<endl;
    cout<<"02  DS                "<<marks2<<"      100       "<<(marks1/100)*100<<endl;
    cout<<"03  AICT              "<<marks3<<"      100       "<<(marks3/100)*100<<endl;
    cout<<"04  Eng               "<<marks4<<"      100       "<<(marks4/100)*100<<endl;

    return 0;
}
