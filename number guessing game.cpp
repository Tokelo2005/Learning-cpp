#include <iostream>
#include <string>
using namespace std;
int main(){
cout<<"**Welcome to the Guesing game ******"<<endl;
cout<<"You have infinite attemts to guess the correct positive number between 0 and 100"<<endl;


while (true){
    
    int b=5;
int number;
cout<<"Lets go Enter Number : ";
cin>>number;
    
    if (number==b){ cout<<"You Got it***";
    break;
} 
else {cout<<"Shame Try Again"<<endl;}


}
    return 0;
}
