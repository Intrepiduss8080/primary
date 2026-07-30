#include <iostream>
#include <string>
#include <fstream>

using namespace std;
using std::cout;


int main(){
    ifstream file("/home/opensor/Документы/structur.pdf");

    if(file.is_open()){

        string find_word {"класс"};
        string line;
        while(getline(file, line)){
            cout << line << "\n";

            if (line.find(find_word) != string::npos){
                break;
            }

        }
        file.close();
    }
}