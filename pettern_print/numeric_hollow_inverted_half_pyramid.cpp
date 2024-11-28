#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0; row<n; row=row+1)
    {
        for(int col=0; col<n-row; col= col+1)
        {
            if(row==0 || row==n-1)
            {
                cout<<" "<<col+1;
            }
            else 
            {
                if(col==0){
                 cout<<" "<<row+1;
                }
                else if(col==n-row-1){
                    cout<<" "<<n;
                }
                else 
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}