#include<iostream>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(const string& col) : color(col) {}

    virtual double area() const = 0;

    string getColor() const {
        return color;
    }

//set the color input by the user
    void setColor(const string& col) {
        color = col;
    }
};

class Circle : public Shape {
private:
    double rad;

public:
    Circle(const string& col, double r) : Shape(col), rad(r) {}

    double area() const override {
        return 3.14 * rad * rad;
    }

    double calculate_area(double r) const {
        return 3.14 * r * r;
    }

//set radius input by the user
    void setRadius(double r) {
        rad = r;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double breath;

public:
    Rectangle(const string& col, double len, double bre) : Shape(col), length(len), breath(bre) {}

    double area() const override {
        return length * breath;
    }

//assume square if only one parameter is provided to us
    double calculate_area(double side) const {
        return side * side;
    }

    double calculate_area(double side1, double side2) const {
        return side1 * side2;
    }
};

int main() {
    Circle Cir("Magenta", 6.9);
    Rectangle Rect("Teal", 4.20, 5.9);

    cout << "Circle calculations: " << endl;
    cout << "Circle Color: " << Cir.getColor() << endl;
    cout << "Circle Area (No parameters passed): " << Cir.area() << endl;
    
    // Change the color of the circle
    Cir.setColor("Rose Pink");
    cout << "Updated Circle Color: " << Cir.getColor() << endl;
    
    Cir.setRadius(9.23);
    cout << "Circle Area (parameters passed): " << Cir.area() << endl;

    cout << "Rectangle calculations: " << endl;
    cout << "Rectangle Area (Normal case): " << Rect.calculate_area(2.4, 3.2) << endl;
    cout << "Rectangle Area (Assumed square): " << Rect.calculate_area(9.35) << endl;
    cout << "Rectangle Area (No parameters passed): " << Rect.area() << endl;

    cout << "Rectangle Color: " << Rect.getColor() << endl;
    // Change the color of the rectangle
    Rect.setColor("Grey");
    cout << "Updated Rectangle Color: " << Rect.getColor() << endl;
    

    return 0;
}
