#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    bool compareAge(const Person& other) {
        return this->age < other.age;
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    Person person1("Shreyas", 42);
    Person person2("Yuvraj", 69);

    if (person1.compareAge(person2)) {
        cout << person1.getName() << " is younger than " << person2.getName() << "." << endl;
    } else {
        cout << person1.getName() << " is older than or same as " << person2.getName() << "." << endl;
    }

    return 0;
}
