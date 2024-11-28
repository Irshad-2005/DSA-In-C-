#include<iostream>
using namespace std;

int findMin(int a,int b, int c)
{
      if(a<b && a<c) 
      {
        return a;
      }
      else if(b<a && b<c)
      {
         return b;
      }
      else 
      {
         return c;
      }
}
int main()
{
    int a,b,c;
    cout<<"Enter values of 3 numbers : ";
    cin>>a>>b>>c;

    int min = findMin(a,b,c);

    cout<<"Find of minimum values :" <<min<<endl;
    return 0;
}