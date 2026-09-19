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
    float marks1;
    float marks2;
    float marks3;
    float marks4;
    
    cout<<"Enter Your Marks in PF: "<<endl;
    cin>>marks1;
     cout<<"Enter Your Marks in DS: "<<endl;
    cin>>marks2;
     cout<<"Enter Your Marks in AICT: "<<endl;
    cin>>marks3;
     cout<<"Enter Your Marks in ENG: "<<endl;
    cin>>marks4;
    auto per1 =(marks1/10.0)*100.0; 
    auto per2 =(marks1/10.0)*100.0; 
    auto per3 =(marks3/10.0)*100.0; 
    auto per4 =(marks4/10.0)*100.0; 
    cout<<"Sr  Subject  Obtain Marks  Total MARKS  PERCENTAGE"<<endl;
    cout<<"01  PF                "<<marks1<<"      10         "<<per1<<endl;
    cout<<"02  DS                "<<marks2<<"      10         "<<per2<<endl;
    cout<<"03  AICT              "<<marks3<<"      10         "<<per3<<endl;
    cout<<"04  Eng               "<<marks4<<"      10         "<<per4<<endl;

    return 0;
}
