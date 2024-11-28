// find max 3 numbers
#include<iostream>
using namespace std;
  int findMax(int a, int b, int c)
  {
       if(a>b && a>c)
       {
         return a;
       }
       else if(b>a && b>c)
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
     cout<<"Enter value of 3 numbers : ";
     cin>>a>>b>>c;
    int max = findMax(a,b,c);
    cout<<"find max numbers : "<<max<<endl;
    return 0;  
}