#include <iostream>
#include <string>
/*
1. Клас "Студент".
Створіть клас "Студент", який містить наступні атрибути: ім'я, вік,
середній бал. Реалізуйте методи для встановлення та отримання значень
кожного атрибута, а також метод для виведення інформації про студента.
*/

using namespace std;

class Student {
    string Name;
    int Age;
    double average;

public:

    Student(string Name, int Age, double average_AP) : Name(Name), Age(Age), average(average) {}

    string get_Name() { return Name; }
    void set_Name(string value) { Name = value; }

    int get_Age() { return Age; }
    void set_Age(int value) { Age = value; }

    double get_average() { return average; }
    void set_average(double value) { average = value; }

    void show() {
        cout << "Name: " << Name << "\nAge: " << Age << "\nAverage: " << average;
    }
};

int main() {

    Student student1("Pavlo", 17, 67);
    student1.show();

    return 0;
}
