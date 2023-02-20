#include <iostream>
using namespace std;

class person{
public:
};

class student:public person{
   public:
       string institution = "JKUAT";
       int year = 3;
       string regNum = "ENE211-0237/2020";
       };

int main(){
student myobj;
myobj.institution;
myobj.year;
myobj.regNum;

cout<<"Institution: "<<myobj.institution<<"\n";
cout<<"Year of study: "<<myobj.year<<" year\n";
cout<<"Registration Number: "<<myobj.regNum;
return 0;
}
