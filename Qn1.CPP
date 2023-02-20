#include <iostream>
#include <string>
using namespace std;

class computer{
private:
    string IPAddress;
public:
void setIPAddress(string address){
    IPAddress = address;
    }
 string getIPAddress(){
    return IPAddress;
    }
    };

class client:public computer{
private:
    string UserName;
public:
 void setUserName(string name){
    UserName = name;
    }
string getUserName(){
    return UserName;
    }
    };

class server:public computer{
private:
    string ServerName;
public:
void setServerName(string name){
   ServerName = name;
   }
string getServerName(){
     return ServerName;
     }
     };

int main(){
client myobj1;
myobj1.setIPAddress("100.456.7603");
myobj1.setUserName("Stanley Kariuki");

server myobj2;
myobj2.setIPAddress("100.456.7603");
myobj2.setServerName("Main Server");

cout<<"The IPAddress:"<<myobj1.getIPAddress()<<"\n";
cout<<"Has made connection to client:"<<myobj1.getUserName()<<"\n";
cout<<"From the:"<<myobj2.getServerName();
return 0;
}
