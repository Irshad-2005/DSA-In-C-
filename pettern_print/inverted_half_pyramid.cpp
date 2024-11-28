#include<iostream>
using namespace std;
int main()
{
     
    int n ;
    // take a input varible n10
    
    cin>>n;
    
    // outer loop row ke liye
     for(int row=0;row<n; row=row+1)
     {
        // inner loop column ke liye
        for(int col=0; col<n-row;col=col+1)
        {
            cout<<"* ";
        }
        cout<<endl;
     }
     return 0;
}