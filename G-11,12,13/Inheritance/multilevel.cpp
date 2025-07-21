#include <iostream>//multilevel inheritance
using namespace std;

class GrandFather{
    public:
    int property;
};

class Father: public GrandFather{
    public:
    char blood;
};

class child : public Father{
    public:
    char name_init;
    
};


int main()
{
    child obj1;
    // obj1.name_init = 'A';
    obj1.property = 100;
    // obj1.blood = 'A';
    
    // cout<<obj1.name_init<<endl;
    cout<<obj1.property<<endl;
    // cout<<obj1.blood<<endl;

    return 0;
}