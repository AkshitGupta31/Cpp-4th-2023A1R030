#include <iostream>
using namespace std;

class Course
{
public:
    string CourseName;
    int CourseId;
    int Credits;

    // Parameterized constructor
    Course(string name, int id, int credit)
    {
        CourseName = name;
        CourseId = id;
        Credits = credit;
    }

    // Display course details
    void Display()
    {
        cout << "\nCourse Name: " << CourseName;
        cout << "\nCourse ID: " << CourseId;
        cout << "\nCredits: " << Credits << "\n";
    }
};

int main()
{
    // Creating an array of Course objects using parameterized constructor
    Course courses[3] = {
        {"Mathematics", 201, 4},
        {"Physics", 202, 3},
        {"Computer Science", 203, 5}
    };

    cout << "Course Details:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nCourse " << i + 1 << ":";
        courses[i].Display();
    }

    return 0;
}
