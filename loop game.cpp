#include <iostream>
#include <string>
using namespace std;
while(TRUE){
string username , password;
cout<<"Enter username : ";
getline(cin,username);
cout<<"Eneter Password : ";
getline(cin,password);

if(username == "Admin" && password=="2468"){
    cout<<"Acces Granted **** WELCOME ****"<<endl;
    break;
}

else {cout<< "Access Denied ......Please try again later"<<endl;
}
}
  return 0;
}
