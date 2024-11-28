#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // Row ke liye for loop

    for(int row=0;row<n;row=row+1)
    {
        // space ke liye for loop
        for(int col=0;col<n-row-1; col=col+1)
        {
            cout<<" ";
        }

        // star and space ke liye for loop
        for(int col=0; col<2*row+1; col=col+1)
        {
            // column first and last print star
            if(col==0 || col==2*row)
            {
                cout<<"*";
            }
         //   space print 
       
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
     // row ke liye for loop
    for(int row=0; row<n; row= row+1)
    {
            // space ke liye for loop
        for(int col =0; col<row; col=col+1)
        {
            cout<<" ";
        }
         // star and space ke liye for loop
        for(int col=0; col<2*n - row - 1; col=col+1)
        {
             // first column and last column ke liye star print 
            if(col==0 || col== 2*n - 2 *row - 2)
            {
                cout<<"*";
            }
            // space print 
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }   
    return 0 ;
}
