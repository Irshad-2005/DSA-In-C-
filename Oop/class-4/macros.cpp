#include<iostream>
using namespace std;
#define PI 3.14 
#define MAXX(x,y) (x > y ? x : y)
#define MINN(x,y) ( x<y ? x : y)
int circleArea(int radius)
{

   return 2 * PI * radius;

}
int maxNumber(int x ,int y)
{
        return  MAXX(x,y);
        
}
int main()
{
      const int result = circleArea(5);
      cout<<"result : "<<result<<endl; 
     const int maximumNum = maxNumber(10,20);
     cout<<"Maximum number is : "<<maximumNum<<endl;
     int c =  MINN(10,20);
     cout<<c<<endl;
}