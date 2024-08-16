#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Course
{
public:
    vector<string> coursesGrades;
    vector<string> coursesNames;
    vector<int> creditHours;
    int totalCreditHours = 0;
    Course(int noOfCourses)
    {
        coursesGrades.resize(noOfCourses);
        coursesNames.resize(noOfCourses);
        creditHours.resize(noOfCourses);
    }
    void GetCourseName()
    {
        cin.ignore();
        cout << endl;
        for (int i = 0; i < coursesNames.size(); i++)
        {
            string courseName;
            cout << "Enter Name of " << i + 1 << " course: ";
            getline(cin, courseName);
            coursesNames[i] = courseName;
        }
        cout << endl;
    }
    void GetGrades()
    {
        cin.ignore();
        cout << endl;
        cout << "Enter Grades for following courses:" << endl;
        for (int i = 0; i < coursesGrades.size(); i++)
        {
            string grade;
            do
            {
                cout << coursesNames[i] << ": ";
                getline(cin, grade);
            } while (isGrade(grade) == false);
            coursesGrades[i] = grade;
        }
        cout << endl;
    }
    void GetCreditHours()
    {
        cout << endl;
        cout << "Enter Credit Hours for following courses:" << endl;
        for (int i = 0; i < coursesGrades.size(); i++)
        {
            int cr;
            cout << coursesNames[i] << ": ";
            cin >> cr;
            creditHours[i] = cr;
            totalCreditHours += cr;
        }
        cout << endl;
    }
    void PrintGrades()
    {
        cout << endl;
        for (int i = 0; i < coursesGrades.size(); i++)
        {
            cout << coursesNames[i] << ": " << coursesGrades[i] << endl;
        }
        cout << endl;
    }
    bool isGrade(string grade)
    {
        if (grade == "A+" || grade == "A-" || grade == "A" || grade == "B+" || grade == "B" || grade == "C" || grade == "D" || grade == "F")
        {
            return true;
        }
        else
            return false;
    }
};