#include <iostream>

using namespace std;

string color(int choi){

cout<<"Enter the number"<<endl;
cin>>choi;

switch(choi){

case 1 :
    cout<<"red"<<endl;
    break;
case 2 :
    cout<<"orange"<<endl;
    break;
case 3 :
    cout<<"yellow"<<endl;
    break;
case 4 :
    cout<<"orange"<<endl;
    break;
case 5 :
    cout<<"blue"<<endl;
    break;
case 6 :
    cout<<"pink"<<endl;
    break;
case 7 :
    cout<<"violet"<<endl;
    break;
default:
    cout<<"wrong number"<<endl;
    break;


}


}


int main(){

color(5);


return 0;
}
