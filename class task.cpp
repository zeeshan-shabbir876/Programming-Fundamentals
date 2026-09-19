#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age in days: ";
    cin>>age;
    int yea= age/365;
    int rem1=age%365;
    int mon = rem1/30;
    int rem2= rem1%30;
   
  
    cout<<yea<<endl;
    cout<<rem1<<endl;
     cout<<mon<<endl;
      cout<<rem2<<endl;

  
   
   cout<<"Your age is : "<<yea<< " Years"<<mon<<" Months and "<<rem2<<" Days"<<endl;
    return 0;
}