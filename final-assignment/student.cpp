#include "student.h"
#include <iostream>
#include <iomanip> 

using namespace std;  


Student::Student(string studentName) {
    name = studentName;
}


void Student::addGrade(double grade) {
    grades.push_back(grade);
}


double Student::calculateAverage() const {
    if (grades.empty()) {
        return 0.0;
    }

    double total = 0.0;
    for (double grade : grades) {
        total += grade;
    }
    return total / grades.size();
}

void Student::printDetails() const {
    cout << "Student Name: " << name << endl;
    cout << "Average Grade: " << fixed << setprecision(2) << calculateAverage() << endl;
}
