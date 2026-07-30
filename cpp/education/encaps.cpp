#include <iostream>
#include <string>

using namespace std;

//Инкапсуляция
class Pers{
    private:

    string name;
    int age;

    public:
    Pers(string p_name, int p_age){
        name = p_name;
        age = p_age;
    }

    void print(){
        cout << "Имя: " << name << "; \n" << "Возраст: " << age << "\n";
    }
};


int main(){
    Pers tom("Tom", 19);
    tom.print();
}