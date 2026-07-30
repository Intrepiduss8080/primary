#include <iostream>
#include <string>

using namespace std;
using  std::cout;
using std::cin;
using  std::string;

class Person{
    public:
    int age;
    string name;

            

    Person(int P_age, string P_name){
        age  = P_age;
        name = P_name;
    }
};

class character{
    public:
    int health;
    double attack;

    void print(){
        cout << "Здоровье: " << health << "Атака: " << attack << "\n";
        }
};


int main(){

    character Arch;

    Arch.health = 120;
    Arch.attack = 40.5;

    Arch.print();
    
}