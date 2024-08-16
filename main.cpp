#include <iostream>
#include "Grade.cpp"
using namespace std;
int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    int noOfCourses;
    cout << "Enter number of Courses: ";
    cin >> noOfCourses;
    Course c = Course(noOfCourses);
    c.GetCourseName();
    c.GetCreditHours();
    c.GetGrades();
    cout << "\nYour Grades of each Course:" << endl;
    c.PrintGrades();
    Grade grade = Grade();
    cout << "CPGA: " << grade.CGPA(c) << endl;
    cout << "Total Grade: " << grade.TotalGrade(c) << endl;
    return 0;
}