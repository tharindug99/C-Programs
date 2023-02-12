#include <iostream>

using namespace std;

int main (){

string food1 = "Pizza ", food2 ="Tacos", food3 = "Noodles";
string descript = "I love Pizza and Noodles";

cout<<"We have 3 options of food"<<endl;
cout<<"Option 1 -: "<<food1<<"\nOption 2 -: "<<food2<<"\nOption 3 -: "<<food3<<endl;

//size funtion() -> used to find the size of a variable
//max_size function() -> gives max length of data type
//find(word,starting position) function -> gives the position of the word ur looking

double size1 = food1.size();
int find1 = descript.find("and",0);


cout<<"The size of Pizza is "<<size1<<" With the space"<<endl;
cout<<"The word \"and\" is found in "<<find1<<endl;


return 0;
}
