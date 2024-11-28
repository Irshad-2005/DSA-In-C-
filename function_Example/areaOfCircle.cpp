#include <iostream>
using namespace std;
int AreaOfCircle(int);
int main()
{
    int r;
    cout << "Enter the value of r : ";
    cin >> r;
    int area = AreaOfCircle(r);
    cout << "Area of circle is : " << area << endl;
    return 0;
}

int AreaOfCircle(int r)
{
    int PI = 3.14;

    int area = PI * r * r;
    return area;
}