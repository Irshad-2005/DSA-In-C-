#include<iostream>
using namespace std;
int main()
{
    int i , n;
    cin>>i;
    cin>>n;
    for(int row=0; row<i; row=row+1)
    {
        if(row==0 || row==i-1)
        {
            for(int col=0; col<n;col=col+1)
            {
                cout<<"* ";
            }
        }
        else 
        {
            cout<<"* ";
            for(int col=0;col<n-2;col=col+1)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
    
     cout<<endl;
    }

      return 0;
}