// Print Counting 1 to N 
#include<iostream> 
using namespace std;
void printCounting(int n)
{
    for(int i=1 ; i<=n; i++)
    {
        cout<<" "<<i ;
    }
}
int main()
{
    int n;
    cout<<"Enter values of n : ";
    cin>>n;
// passing by argument 
    printCounting(n);
    return 0;
}
