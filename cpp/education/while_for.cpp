#include <iostream>

using std::cout;

int main(){
    int a {25};
    int *b{&a};
    int c{*b};
    
    cout << c;
}