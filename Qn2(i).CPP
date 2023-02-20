#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    int age;
    string firstName;
    string lastName;
public:

    Person(int a, string f, string l) : age(a), firstName(f), lastName(l) {}


    void getValues() {
        cout << "First Name: " << firstName << "\nLast Name: " << lastName << "\nAge:" << age << endl;
    }
    void setValues(int a, string f, string l) {
        age = a;
        firstName = f;
        lastName = l;
    }
};

int main() {

    Person obj(21, "Stanley", "Kariuki");

    obj.getValues();

    obj.setValues(22, "Michael", "Jordan");

    obj.getValues();

    return 0;
}
