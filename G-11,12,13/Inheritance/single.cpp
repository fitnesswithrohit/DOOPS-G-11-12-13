#include <iostream>//single inheritance
using namespace std;

class Parent{
    public:
    int property;
};

class child : public Parent{
    public:
    char name_init;
    
};


int main()
{
    child obj1;
    obj1.name_init = 'A';
    obj1.property = 100;
    
    cout<<obj1.name_init<<endl;
    cout<<obj1.property<<endl;

    return 0;
}