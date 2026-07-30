#include <iostream>
#include <string>

using namespace::std;

class Person{
    private:
    string name;
    int age;

    public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

};
    class Student : public Person{
        private:
        int Student_id;

        public:

        Student(string n, int a) : Person(n), id(a){}

        void print(){
                cout << Student_id;
            }
    };


int main(){
    Person mark{"Mark", 19};
}