#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int ID;
    string department;
    

public:
    
    Employee(string name = "Unknown", int ID = 0, string department = "Unknown")
        : name(name), ID(ID), department(department) {
    
    }

    
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "Department: " << department << endl;
        
    }
};

int main() {

    Employee emp1; 
    Employee emp2("Shreyas Ladhe", 11081, "HR");

    cout << "Employee 1 Information:" << endl;
    emp1.displayInfo();
    cout << endl;

    cout << "Employee 2 Information:" << endl;
    emp2.displayInfo();

    return 0;
}
