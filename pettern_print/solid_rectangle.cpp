#include<iostream>
using namespace std;
int main()
{
    // outer loop rows ke liye
     for(int row=0; row<3;row=row+1)
     {
        // inner loop column ke liye
        for(int col=0;col<5;col=col+1)
        {
            cout<<"* ";
        }
        cout<<endl;
     }
     return 0;
}