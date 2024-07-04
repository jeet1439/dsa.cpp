//create a user class with these props: id(private),
//username(public) & password(private). it should be initalized 
//in a oara meterzed constructor. shoud have a getter and setter for 
//password. 
#include<iostream>
#include<string>
using namespace std;

class User{
private:
int id;
string  password;


public:
   string username;

   User(int id){
    this->id = id;
   }

   //getter
   string getPassword(){
    return password;
   }

   void setPassword(string password){
    this->password = password;
   }
};
int main(){
   User u1(101);
   u1.username = "jeet";
   u1.setPassword("abcd");

   cout << "username: " << u1.username << endl;
   cout << "passWord: " << u1.getPassword() << endl;
   return 0;
}
