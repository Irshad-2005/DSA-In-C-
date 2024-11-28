#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Marks ";

    cin>>marks;

    if(marks>=90)
    {
        cout<<"A grade"<<endl;
    }
    else if(marks>=80)
    {
        cout<<"B grade"<<endl;
    }
    else if(marks>=60)
    {
        cout<<"C grade"<<endl;
    }
    else if(marks>=40)
    {
        cout<<"D grade"<<endl;
    }
    else
    {
        cout<<"F grade"<<endl;
    }

    return 0;
}