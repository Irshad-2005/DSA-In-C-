#include <iostream>
using namespace std;

float findCircle(int r)
{
    float PI = 3.14;
    return (PI * r * r);
}

int main()
{
    int r;
    cout << "Enter to circle of radius : ";
    cin >> r;
    float area = findCircle(r);
    cout << "Circle of Area is " << area << endl;
    return 0;
}