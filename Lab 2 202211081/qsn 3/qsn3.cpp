#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:

    Rectangle(int len = 1, int wid = 1) {
        length = len;
        width = wid;
    }

    int calcarea() {
        return length * width;
    }

    int calcperi() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle square;
    cout << "Square Area: " << square.calcarea() << endl;
    cout << "Square Perimeter: " << square.calcperi() << endl;

    Rectangle rectangle(2, 9);
    cout << "Rectangle Area: " << rectangle.calcarea() << endl;
    cout << "Rectangle Perimeter: " << rectangle.calcperi() << endl;

    return 0;
}
