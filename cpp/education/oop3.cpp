#include <iostream>
#include <string>

using namespace std;

class Pers{
    private:
    int age;
    string name;
    double weight;

    public:

    Pers(int age_p, string name_p, double weight_p){
        age = age_p;
        name = name_p;
        weight = weight_p;
    }

    void print() const{
        cout << "Имя: " << name << "\n Возраст: " << age << "\n Вес: "<<weight;
    }

    
};

int main(){

    Pers tom {19, "Tom", 67.9};
    const Pers Yap{20, "Yap", 88.1};
    
    Yap.print();
    cout << '\n';
    tom.print();
}