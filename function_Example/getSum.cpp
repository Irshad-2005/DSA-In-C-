#include<iostream>
using namespace std;
int getSum(int a , int b)
{
    int sum = a+b;
    return sum;
}
int main()
{
    int a,b;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;

    int ans = getSum(a,b);
    cout<<"value of "<<a<<" and "<<b<<" is sum : "<<ans<<endl;
    return 0;
}