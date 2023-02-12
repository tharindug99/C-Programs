#include <iostream>



using namespace std;

int main(){

string choice1,choice2;

cout<<"Do you like Pizza? "<<endl;
getline(cin,choice1);
cout<<"Do you like Burger? "<<endl;
getline(cin,choice2);


if(choice1 =="yes" && choice2 == "yes"){
    cout<<"Good, you like both of them"<<endl;
}
else if(choice1 =="yes" && choice2 =="no"){
    cout<<"You, like only Pizza only"<<endl;
}
else if(choice1 =="no" && choice2 =="yes"){
    cout<<"You, like only Burger only"<<endl;
}
else{
    cout<<"You, don't like any of them !!!"<<endl;
}


return 0;
}

