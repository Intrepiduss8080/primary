#include <algorithm>
#include <iostream>
#include <string>
#include <iterator>

using namespace std;
using std::cout;
using std::string;


int main(){
 //массив
    string dict [4] {"book1", "book2", "book3", "book4"};

    int i{0};
    while(i < sizeof(dict) / sizeof(dict[0])){
        cout << "Номер элемента: " << i << "  Элемент: " << dict[i] << "\n";
        i++;
    }
}