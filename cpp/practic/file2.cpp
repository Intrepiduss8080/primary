#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::cout;

int main(){
    ifstream file("/home/opensor/Документы/pointer.txt");
    
     if(file.is_open()){
        string line;
        int l_count{0};
        
        while (getline(file, line)){
            l_count += 1;
            cout << line << "\n";

            if(l_count == 3){
                break;
            }
        }
        file.close();
     }
}