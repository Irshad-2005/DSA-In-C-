#include<iostream>
using namespace std;
int main()
{
    // outer loop row ke liye 
    for(int row=0;row<3;row=row+1)
    {
        if(row==0 || row==2)
        {
         // inner loop print 5 * row ==0 or row ==2 ke liye
            for(int col=0;col<5;col=col+1)
            {
              cout<<"* ";
            }
        }
        else 
         {
            // print * col == 1st ke liye
            cout<<"* ";
            // inner loop print 3 space row==1 ke liye
            for(int col=0;col<3;col=col+1)
            {
                  cout<<"  ";
            }
            // print * last col ke liye
            cout<<"* ";
         }
         cout<<endl;
    }
    return 0;
}