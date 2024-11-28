#include<iostream>
using namespace std;
int main(){

    // declare a integer type of varible
    int age;
    // print enter the age
    cout<<"Enter the age "<<endl;
     // take the input into a age varible 
     cin>>age;
    
    // if condition 
    if(age>=18)
    {
        cout<<"I can vote"<<endl;
    }
    else {
        cout<<" I can not vote"<<endl;
    }
    return 0;
}
