#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
    string name;
    int age;


    Person(string p_name, int p_age){
        age = p_age;
        name = p_name;
    }
};

class Character{
    public:
    int health;
    double attack;

    Character(int c_health, double c_attack){
        health = c_health;
        attack = c_attack;
    }
};


int main(){
   Person tom("Tom", 27);
   Character arch(120, 20.5);


   cout << " Person =>  Имя: " << tom.name << "; \n" << "Возраст: " << tom.age;
   cout << " Character => Здоровье: " << arch.health << "; \n" << "Атака: " << arch.attack;
}