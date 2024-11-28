#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    for(int row=0; row<n; row=row+1)
    {

        int col=0;
       
        for(; col<row+1; col=col+1)
        {
            int ans = col;
            char ch =  ans + 'A';
            cout<<ch<<" ";
        }
        
        for(int col = row ; col>=1 ; col = col-1)
        {
            int ans = col;
            char ch = ans + 'A' - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
     
}