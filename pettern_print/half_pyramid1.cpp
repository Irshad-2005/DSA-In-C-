#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    // outer loop rows ke liye
    for(int row=0;row<n;row=row+1)
    {
        //ineer loop column ke liye
        for(int col=0;col<row+1; col=col+1)
            {
                cout<<"* ";
            }
            cout<<endl;
    }
    return 0;
}