#include <iostream>

using namespace std;

int food();

int main(){

string name;
int age;

food();

cout<<"Enter your name -:"<<endl;
cin>>name;

cout<<"Enter your age -:"<<endl;
cin>>age;

cout<<"Your name is "<<name<<endl;
cout<<"Your age is "<<age<<endl;

return 0;
}

int food(){

cout<<"Hey what do you want to eat "<<endl;
string ansl;
getline(cin,ansl);
cout<<"You want to eat"<<ansl<<endl;

return 0;
}
