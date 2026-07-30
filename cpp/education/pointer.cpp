#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::cout;

class Person{
    public:
    int age;
    string name;

    void printed(){
        cout << "Имя: " << name << ", возраст: " << age << "\n";

    }
};

int main(){
    Person Mark;

    Person *pers = &Mark;
    pers->name = "Mark";
    pers->age = 19;
    pers->printed();

    
}