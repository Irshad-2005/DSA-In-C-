#include<iostream>
using namespace std;
int main()
{
  int i , n;
  cin>>i;
  cin>>n;
   // outer loop rows ke liye 
   for(int row=0;row<i;row=row+1)
   {
      // inner loop column ke liye 
       for(int col=0;col<n;col=col+1)
       {
        cout<<"* ";
       }
       cout<<endl;
   }
   return 0;
}