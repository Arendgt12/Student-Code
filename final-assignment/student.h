
#include <string>
#include <vector>

using namespace std;  

class Student {
public:
    Student(string studentName); 
    void addGrade(double grade);
    double calculateAverage() const;
    void printDetails() const;

private:
    string name;               
    vector<double> grades;  
};


