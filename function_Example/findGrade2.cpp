#include <iostream>
using namespace std;
char findGrade(int marks)
{
    switch (marks / 10)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 6:
        return 'C';
        break;
    case 4:
        return 'D';
        break;
    default:
        return 'F';
    }
}

int main()
{
    int marks;
    cout << "Enter to values of marks : ";
    cin >> marks;
    char grade = findGrade(marks);
    cout << "Grade is : " << grade << endl;
    return 0;
}