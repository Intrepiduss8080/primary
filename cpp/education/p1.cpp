#include <iostream>
#include <string>

using namespace std;
using std::cout;

int main(){

    int p = 143;

    int *p_point = &p;

    cout << *p_point << "\n";
}