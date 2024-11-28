#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //outer loop for rows ke liye
    for(int row=0;row<n;row=row+1)
    {
        //inner loop for space print  
        for(int col=0;col<row;col=col+1)
        {
            cout<<" ";
        }
        //inner loop for * print
        for(int col=0;col<n-row;col=col+1)
        {
            cout<<" * ";
        } 
        cout<<endl;
    
    }

    return 0;
}