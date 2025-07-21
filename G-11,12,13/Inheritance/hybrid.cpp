#include <iostream>//Hybrid inheritance
using namespace std;

class Father{
    public:
    int property;
};

class Mother{
    public:
    int cute;
};

class child1: public Father{
    public:
    char blood;
};

class child2 : public Father{
    public:
    char name_init;
};

class child3 : public Father, public Mother{
    public:
    char name_init;
    
};


int main()
{
    child3 obj3;
    obj3.property = 50;
    obj3.cute = 1000;
    
    cout<<obj3.property<<endl;
    cout<<obj3.cute<<endl;

    return 0;
}