#include <iostream>
#include "Course.cpp"
using namespace std;
class Grade
{
    double cgpa = 0;

public:
    double GradePoints(string grade)
    {
        if (grade == "A+")
            return 4.0;
        else if (grade == "A")
            return 4.0;
        else if (grade == "A-")
            return 3.66;
        else if (grade == "B+")
            return 3.33;
        else if (grade == "B")
            return 3.0;
        else if (grade == "B-")
            return 2.66;
        else if (grade == "C+")
            return 2.33;
        else if (grade == "C")
            return 2.00;
        else if (grade == "C-")
            return 1.66;
        else if (grade == "D+")
            return 1.33;
        else if (grade == "D")
            return 1.0;
        else if (grade == "F")
            return 0.0;
        return 0;
    }
    double TotalGradePoint(Course course)
    {
        double points = 0;
        for (int i = 0; i < course.coursesGrades.size(); i++)
        {
            points += GradePoints(course.coursesGrades[i]) * course.creditHours[i];
        }
        return points;
    }
    double CGPA(Course course)
    {
        double totalGradePoints = TotalGradePoint(course);
        double totalCreditHours = course.totalCreditHours;
        cgpa = totalGradePoints / totalCreditHours;
        return (cgpa);
    }
    string TotalGrade(Course course)
    {
        if (cgpa == 4.0)
        {
            return "A+";
        }
        else if (cgpa <= 3.99 && cgpa >= 3.66)
            return "A-";
        else if (cgpa <= 3.65 && cgpa >= 3.33)
        {
            return "B+";
        }
        else if (cgpa <= 3.32 && cgpa >= 3.0)
        {
            return "B";
        }
        else if (cgpa <= 2.99 && cgpa >= 2.66)
        {
            return "B-";
        }
        else if (cgpa <= 2.65 && cgpa >= 2.33)
        {
            return "C+";
        }
        else if (cgpa <= 2.32 && cgpa >= 2.0)
        {
            return "C";
        }
        else if (cgpa <= 1.99 && cgpa >= 1.66)
        {
            return "C-";
        }
        else if (cgpa <= 1.65 && cgpa >= 1.33)
        {
            return "D+";
        }
        else if (cgpa <= 1.32 && cgpa >= 1.0)
        {
            return "D";
        }
        else
        {
            return "F";
        }
    }
};