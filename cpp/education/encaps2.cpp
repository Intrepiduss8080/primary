#include <iostream>
#include <string>

using namespace std;

class Person{
private:
  int age;
  string name;

  public:
    Person(int p_age,  string p_name){
      age = p_age;
      name = p_name;
  }

  void print(){
    cout << "Имя: "<< name << "; \n" << age << "; \n";
  }
}; 


  int main(){

  Person tom(17, "Tom");
  tom.print();
}
