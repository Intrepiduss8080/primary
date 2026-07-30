#include <iostream>
#include <fstream>

using namespace std;
using std::cout;

int main(){
    fstream file("/home/opensor/Документы/file_1.txt");
    if (file.is_open()){
        file << "Этот текст введен при помощи c++";
        file.close();
    }

    else{
        cout << "Ошибка";
    }
}