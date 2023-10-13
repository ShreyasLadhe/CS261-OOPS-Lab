#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int breath;

public:
    Rectangle(int l, int b) : length(l), breath(b) {}

    int calculateArea() {
        return this->length * this->breath;
    }
};

int main() {
    Rectangle myRectangle(6, 9);

    int area = myRectangle.calculateArea();
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
