#include <iostream>//hierarchy inheritance
using namespace std;

class Parent{
    public:
    int property;
};

class child1: public Parent{
    public:
    char blood;
};

class child2 : public Parent{
    public:
    char name_init;
    
};


int main()
{
    child1 obj1;
    obj1.property = 50;
    
    child2 obj2;
    obj2.property = 50;
    
    cout<<obj1.property<<endl;
    cout<<obj2.property<<endl;

    return 0;
}