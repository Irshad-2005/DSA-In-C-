#include<iostream>
using namespace std;

char findGrade(int marks)
{
    if(marks>=90)
    {
        return 'A';
    }
    else if(marks>=80)
    {
        return 'B';
    }
    else if(marks>=60)
    {
        return 'C';
    }
    else if(marks>=40)
    {
        return 'D';
    }
    else 
    {
        return 'F';
    }
}
int main()
{
    int marks;
    cout<<"Enter the value of marks : ";
    cin>>marks;
    char grade = findGrade(marks);
    cout<<"Garde is : "<<grade<<endl;
    return 0;
}