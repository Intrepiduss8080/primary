#include <iostream>
#include <string>
#include <fstream>

using namespace std;
using std::cout;

int main(){
    ifstream File("/home/opensor/Документы/pointer.txt");

    if (File.is_open()){
        string line;
        string word_1{"malloc"};

        while(getline(File, line)){
            cout << line << "\n";
            
            if (line.find(word_1) != string::npos){
                cout << "Слово найдено! - " << word_1;
                break;
            }
        }

        File.close();
    }
}