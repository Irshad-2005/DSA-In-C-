#include<iostream>
using namespace std;
int main()
{

 int n;
 cin>>n;
 //row ke liye for loop
 for(int row=0; row<n; row=row+1)
 {
    // space print ke liye for loop
    for(int col=0; col<n-row-1;col=col+1)
    {
         cout<<" ";
    }
    // print star ke liye for loop
    for(int col=0;col<row+1;col=col+1)
    {
        cout<<" * ";
    }
    cout<<endl;
 }
     for(int row=0; row<n ;row=row+1)
     {
         // print space ke liye for loop
             for(int col=0;col<row;col=col+1)
             {
                cout<<" ";
             }
             // space ke liye for loop
             for(int col=0;col<n-row;col=col+1)
             {
                cout<<" * ";
             }
             cout<<endl;
     } 

 

}