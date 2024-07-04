#include<iostream>
using namespace std;

class Car{
 string name;
 string color;

 public:
   
  Car(){
    cout << "constructor without parameter\n";
  }
  Car(string nameValue, string colorVal){
    //constructor---(with parameter)
    cout << "constructor is called, object is been created\n";
    name = nameValue;
    color = colorVal;
  }
  void start(){
  cout << "the car is starting ...\n";
  }
  void stop(){
    cout << "the car is stopping ...\n";
  }
  //getter
  string getName(){
    return name;
  }
};
int main(){
    Car c0;
    Car c1("devid putra 2000 cc", "white");

    cout << "car  name: " << c1.getName() << endl;
    return 0;
}