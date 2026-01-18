#include <iostream>
using namespace std;

class Student {
public:
    int age;
    void show() {
        cout << "Age: " << age;
    }
};

int main() {
    Student s;
    s.age = 20;
    s.show();
    return 0;
}
