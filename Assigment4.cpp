#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee(string n, int id, string dep, string pos) {
        name = n;
        idNumber = id;
        department = dep;
        position = pos;
    }

    Employee(string n, int id) {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }

    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    void setName(string n) {
        name = n;
    }

    void setIdNumber(int id) {
        idNumber = id;
    }

    void setDepartment(string dep) {
        department = dep;
    }

    void setPosition(string pos) {
        position = pos;
    }

    string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    string getDepartment() const {
        return department;
    }

    string getPosition() const {
        return position;
    }
};

int main() {
    Employee emp1("Susan Meyers ", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119,"IT", "Programmer" );
    Employee emp3("Joy Rogers",81774,"Manufacturing", "Engineer");


    cout << "Employee 1: " << emp1.getName() << ", " << emp1.getIdNumber() << ", " << emp1.getDepartment() << ", " << emp1.getPosition() << endl;
    cout << "Employee 2: " << emp2.getName() << ", " << emp2.getIdNumber() << ", " << emp2.getDepartment() << ", " << emp2.getPosition() << endl;
    cout << "Employee 3: " << emp3.getName() << ", " << emp3.getIdNumber() << ", " << emp3.getDepartment() << ", " << emp3.getPosition() << endl;

    return 0;
}
