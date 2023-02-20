#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int id;
public:
    Student(string n, int i) : name(n), id(i) {}
    virtual void displayInfo() = 0;
};

class Law : public Student {
public:
    Law(string n, int i) : Student(n, i) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: Law" << endl;
    }
};


class Business : public Student {
public:
    Business(string n, int i) : Student(n, i) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: Business" << endl;
    }
};

class ICT : public Student {
public:
    ICT(string n, int i) : Student(n, i) {}
    virtual void displayInfo() = 0;
};


class ICTCertificate : public ICT {
public:
    ICTCertificate(string n, int i) : ICT(n, i) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: Certificate" << endl;
    }
};
class ICTDiploma :public ICT {
public:
    ICTDiploma(string n, int i) : ICT(n, i) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: Diploma" << endl;
    }
};

class BscIT : public ICT {
protected:
    int stage;
public:
    BscIT(string n, int i, int s) : ICT(n, i), stage(s) {}
    virtual void displayInfo() = 0;
};

class BscITStage1 : public BscIT {
public:
    BscITStage1(string n, int i) : BscIT(n, i, 1) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: BSC-IT\nStage: 1" << endl;
    }
};
class BscITStage2 : public BscIT {
public:
    BscITStage2(string n, int i) : BscIT(n, i, 2) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: BSC-IT\nStage: 2" << endl;
    }
};
class BscITStage3 : public BscIT {
public:
    BscITStage3(string n, int i) : BscIT(n, i, 3) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: BSC-IT\nStage: 3" << endl;
    }
};



int main() {

    Law law("Jones", 1111);
    law.displayInfo();
    cout << endl;

    Business bss("Franc", 1222);
    bss.displayInfo();
    cout << endl;

    ICTCertificate ictc("Joash", 1333);
    ictc.displayInfo();
    cout << endl;

    ICTDiploma ictd("Ken", 1444);
    ictd.displayInfo();
    cout << endl;


    BscITStage1 icts1("Bill", 1555);
    icts1.displayInfo();
    cout << endl;

    BscITStage2 icts2("Paul", 1666);
    icts2.displayInfo();
    cout << endl;

    BscITStage3 icts3("Stanley", 1777);
    icts3.displayInfo();
    cout << endl;

}
