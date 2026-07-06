#include <iostream>
#include <string>
using namespace std;

int main(){
 //Task 0ne....................
string name;
cout<< "Enter Name:";
getline(cin , name);
cout<< "HELLO "<<name<<" welcome to your calculator "<<endl; 

int a,b,c,d,e;

cout<<"Enter your first number : "; 
cin>>a;
cout<<"Enter your Second Number : ";
cin>>b;
c=a+b;
d=b-a;
e=a*b;
cout<<"your sum is = "<<c<<endl;
cout<<"your different is = "<<d<<endl;
cout<<"product is = "<<e<<endl;
return 0; 
}
