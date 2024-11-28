#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0; row<n; row=row+1)
    {
        for(int col=0; col<row+1; col=col+1)
        {
            if(row==0 || row==n-1)
            {
                cout<<" "<<col+1;
            }
            else
            {
                if(col==0)
                {
                    cout<<" "<<col+1;
                }
                else if(col==row)
                {
                    cout<<" "<<row+1;
                }
                else
                {
                    cout<< " ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}