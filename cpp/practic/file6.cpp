#include <iostream>
#include <string>
#include <fstream>

using namespace std;
using std::cout;
using std::string;


int main(){
   ofstream file("/home/opensor/Документы/bit.txt", ios::ate | ios::app);

    if (file.is_open()){
        file << "Это строка была записана с помощью C++ ! \n";
    }
    file.close();
}