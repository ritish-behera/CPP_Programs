
#include <iostream>
#include <string>
using namespace std;

char getGrade(int marks) {
    if (marks >= 90) {
        return 'A';
    } else if (marks >= 80) {
        return 'B';
    } else if (marks >= 70) {
        return 'C';
    } else if (marks >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    const int numStudents = 5; 
    string names[numStudents];
    int marks[numStudents];

    cout << "Enter the names and marks of students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << " Name: ";
        getline(cin, names[i]);
        cout << "Student " << i + 1 << " Marks: ";
        cin >> marks[i];
    }

    // Display grades
    cout << "\nGrades:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << " (" << names[i] << ") - Marks: " << marks[i] << " - Grade: " << getGrade(marks[i]) << endl;
    }

    return 0;
}
