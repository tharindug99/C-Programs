#include <iostream>

using namespace std;

int main(){

for(int i=1; i<=10; i++){
    cout<<i<<endl;
}

string password, conf_password;

cout<<"Create a new password"<<endl;
getline(cin,password);

cout<<"Confirm the password"<<endl;
getline(cin,conf_password);

while(password != conf_password ){
    cout<<"Wrong password, Pls try again"<<endl;
    getline(cin,conf_password);
}

cout<<"Password created Successfully !!"<<endl;


return 0;
}
