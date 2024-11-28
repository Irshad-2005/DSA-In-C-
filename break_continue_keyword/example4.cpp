#include<iostream>
using namespace std;
int main()
{
    // break keyword
    for(int i=0; i<5; i++) 
    {
        cout<<i;
        if(i == 2)
        {
            break;
        }
          
    }
    return 0;
}