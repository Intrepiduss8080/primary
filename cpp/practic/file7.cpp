#include <iostream>
#include <string>
#include <fstream>

using namespace::std;

class files{
    private:

    string filename;
    string word;
    fstream File;

    public:
        void file_open(){
              cout << "Введите название файла: ";
            cin >> filename;
            File.open("/home/opensor/"+filename, ios::binary);
        }

        void Output(){
            file_open();

            if(File.is_open()){
                string line;

                while (getline(File, line)){
                    cout << line << "\n" ;
                }
            }
      }

      void Find(){
        file_open();

        cout <<" слово: ";
        cin >> word;

        if(File.is_open()){
            string line;

            while(getline(File, line)){
                cout << line << "\n";
                if(line.find(word) != string::npos){
                    cout << "\n" << "Слово найдено - " << word;
                    break;
                }
            }
        }
      }

   

};


int main(){
    files obj1;
}