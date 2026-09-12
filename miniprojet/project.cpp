#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int age;
    float marks;

    cout << "===== STUDENT MANAGEMENT SYSTEM =====\n";

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "\n===== STUDENT DETAILS =====\n";
    cout << "Name  : " << name << endl;
    cout << "Age   : " << age << endl;
    cout << "Marks : " << marks << endl;

    if (marks >= 90) {
        cout << "Grade : A";
    }
    else if (marks >= 75) {
        cout << "Grade : B";
    }
    else if (marks >= 60) {
        cout << "Grade : C";
    }
    else if (marks >= 40) {
        cout << "Grade : D";
    }
    else {
        cout << "Grade : F";
    }

    return 0;
}