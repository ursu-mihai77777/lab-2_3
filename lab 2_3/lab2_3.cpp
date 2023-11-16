#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name; 
    float grade;
};


Student Max(Student a, Student b) {
    return (a.grade > b.grade) ? a : b;
}

int main() {
  

    Student student1 = { "Ion", 8.5 };
    Student student2 = { "Vali", 9.2 };
    Student maxStudent = Max(student1, student2);

    cout << "Studentul cu cea mai mare nota este " << maxStudent.name << " cu nota " << maxStudent.grade <<endl;

    return 0;
}

