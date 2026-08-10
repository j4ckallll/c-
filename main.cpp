#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float cgpa;
} jishnu, vishnu;

int main() {

    jishnu.name = "jishnu";
    jishnu.age = 18;
    jishnu.cgpa = 9.0;

    vishnu.name = "vishnu";
    vishnu.age = 23;
    vishnu.cgpa = 9.5;

    int studentChoice;
    cout << "Select Student:\n1. Jishnu\n2. Vishnu\nEnter choice (1 or 2): ";
    cin >> studentChoice;

    Student selectedStudent;
    if (studentChoice == 1) {
        selectedStudent = jishnu;
    } else if (studentChoice == 2) {
        selectedStudent = vishnu;
    } else {
        cout << "Invalid student selection!" << endl;
        return 0;
    }

    int infoChoice;
    cout << "\nSelect Info to View:\n1. Name\n2. Age\n3. CGPA\nEnter choice (1-3): ";
    cin >> infoChoice;

    cout << "\nResult: ";
    if (infoChoice == 1) {
        cout << selectedStudent.name << endl;
    } else if (infoChoice == 2) {
        cout << selectedStudent.age << endl;
    } else if (infoChoice == 3) {
        cout << selectedStudent.cgpa << endl;
    } else {
        cout << "Invalid info selection!" << endl;
    }

    return 0;
}