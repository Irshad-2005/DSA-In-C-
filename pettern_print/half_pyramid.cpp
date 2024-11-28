#include<iostream>
using namespace std;
int main()
{
    // outer loop row ke liye
    for(int row = 0; row<5;row=row+1)
    {
      // ineer loop column ke liye
      for(int col=0; col<row+1;col=col+1)
      {
        cout<<"* ";
      }
     cout<<endl;
    }
    return 0;
}
