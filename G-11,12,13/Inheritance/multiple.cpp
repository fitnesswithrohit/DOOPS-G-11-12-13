#include <iostream>//multiple inheritance
using namespace std;

class Father{
    public:
    int property;
};

class Mother{
    public:
    char blood;
};

class child : public Father, public Mother{
    public:
    char name_init;
    
};


int main()
{
    child obj1;
    obj1.name_init = 'A';
    obj1.property = 100;
    obj1.blood = 'A';
    
    cout<<obj1.name_init<<endl;
    cout<<obj1.property<<endl;
    cout<<obj1.blood<<endl;

    return 0;
}