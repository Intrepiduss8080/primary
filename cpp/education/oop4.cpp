#include <iostream>
#include <string>

using namespace::std;


class Numbers{
    private:
    
    int x;
    int y;
    int z;

    public:
    
    Numbers(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;

    }
        int summ(){
            return x+y+z;
        }
    
};


int main(){
    Numbers n1{10, 20, 30};
    cout <<  n1.summ(); 
} 