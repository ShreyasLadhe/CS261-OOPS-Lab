#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    string getName() { 
        return name;
    }
    int getAge() {
        return age;
    }
};

int main() {
    Person person1("Yuvraj", 20);
    Person person2("Shreyas", 19);

    cout << "Person 1 - Name: " << person1.getName() << ", Age: " << person1.getAge() << endl;
    cout << "Person 2 - Name: " << person2.getName() << ", Age: " << person2.getAge() << endl;

    person1.setName("Trijay");
    person1.setAge(69);

    cout << "Updated Person 1 - Name: " << person1.getName() << ", Age: " << person1.getAge() << endl;

    return 0;
}