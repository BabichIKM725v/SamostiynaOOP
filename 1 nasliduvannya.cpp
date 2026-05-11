#include <iostream>
#include <string>
/*
1. Клас "Фігура" та його підкласи.
Створіть клас "Фігура", який має атрибут для кольору. Створіть
підкласи, такі як "Коло", "Прямокутник" та "Трикутник", які наслідують клас
"Фігура". Кожен з підкласів повинен мати свої власні атрибути та методи,
наприклад, для обчислення площі.
*/
using namespace std;

class Figure {
protected:
    string color;

public:
    Figure(string color) : color(color) {}

    string getColor() { return color; }
    virtual double getArea() = 0;
};

class Circle : public Figure {
    double radius;
public:
    Circle(string color, double radius) : Figure(color), radius(radius) {}

    virtual double getArea() {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Figure {
    double width, height;
public:
    Rectangle(string color, double width, double height) : Figure(color), width(width), height(height) {}

    virtual double getArea() {
        return width * height;
    }
};

class Triangle : public Figure {
    double base, height;
public:
    Triangle(string color, double base, double height) : Figure(color), base(base), height(height) {}

    virtual double getArea() {
        return 0.5 * base * height;
    }
};

int main() {
    Circle circle("Red", 5);
    Rectangle rectangle("Blue", 4, 6);
    Triangle triangle("Green", 3, 4);

    cout << "CIRCLE" << endl;
    cout << "Color: " << circle.getColor() << endl;
    cout << "Area: " << circle.getArea() << endl;
    cout << endl;

    cout << "RECTANGLE" << endl;
    cout << "Color: " << rectangle.getColor() << endl;
    cout << "Area: " << rectangle.getArea() << endl;
    cout << endl;

    cout << "TRIANGLE" << endl;
    cout << "Color: " << triangle.getColor() << endl;
    cout << "Area: " << triangle.getArea() << endl;
    cout << endl;

}
