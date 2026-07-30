#include <iostream>
#include <string>

using namespace::std;

class Person{
  private:
    int age;
    string name;
  
    Person(int age_p, string name_p){
       name = name_p;
       age = age_p;

  } 
    
  void print(){
    cout << "Имя: " << name_p << " возраст: " << age_p;
  }
};

  int main(){
  
  Person tom{17; "Tom"};
  tom.print();

  return 0;
}
