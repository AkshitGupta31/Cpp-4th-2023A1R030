#include<iostream>
using namespace std;

class Course {
    string CourseName;
    int CourseId;
    int CourseCredits;

public:
    // Parameterized Constructor
    Course(string name, int id, int credits) {
        CourseName = name;
        CourseId = id;
        CourseCredits = credits;
    }

    // Member Function to update course details
    void updateDetails(string name, int id, int credits) {
        CourseName = name;
        CourseId = id;
        CourseCredits = credits;
    }

    void displayDetails() {
        cout << "Course Name : " << CourseName << endl;
        cout << "Course Id : " << CourseId << endl;
        cout << "Course Credits : " << CourseCredits << endl;
    }
};

int main() {
    // Initial course details
    Course obj("C++ Programming", 101, 4);

    cout << " Initial Course Details " << endl;
    obj.displayDetails();

    // Updating details using member function
    obj.updateDetails("Data Structures", 102, 5);

    cout << "\n Updated Course Details " << endl;
    obj.displayDetails();

    return 0;
}
