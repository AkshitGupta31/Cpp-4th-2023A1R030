#include<iostream>
using namespace std;

class Course {
    string courseName;
    int courseCode;
    int courseCredits;

public:
    // Parameterized Constructor
    Course(string name, int code, int credits) {
        courseName = name;
        courseCode = code;
        courseCredits = credits;
    }

    // Member Function to delete details
    void deleteDetails() {
        courseName = "";
        courseCode = 0;
        courseCredits = 0;
    }

    void displayDetails() {
        if(courseName == "" && courseCode == 0 && courseCredits == 0) {
            cout << "Course details have been deleted!" << endl;
        } else {
            cout << "Course Name    : " << courseName << endl;
            cout << "Course Code    : " << courseCode << endl;
            cout << "Course Credits : " << courseCredits << endl;
        }
    }
};

int main() {
    Course obj1("Operating Systems", 103, 4);
    Course obj2("Data Structures", 101, 3);
    Course obj3("Computer Networks", 202, 3);

    cout << "Course 1 Details" << endl;
    obj1.displayDetails();

    cout << "\nCourse 2 Details" << endl;
    obj2.displayDetails();

    cout << "\nCourse 3 Details" << endl;
    obj3.displayDetails();

    // Deleting course 2 details only
    obj2.deleteDetails();

    cout << "\nAfter Deleting Course 2 Details" << endl;

    cout << "\nCourse 1:" << endl;
    obj1.displayDetails();

    cout << "\nCourse 2:" << endl;
    obj2.displayDetails();

    cout << "\nCourse 3:" << endl;
    obj3.displayDetails();

    return 0;
}
