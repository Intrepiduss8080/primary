#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main(){
    double a{}, b{}, c{};
 
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    c = a + b;
    
    cout <<  a << '+' << b << " = " << c;
}