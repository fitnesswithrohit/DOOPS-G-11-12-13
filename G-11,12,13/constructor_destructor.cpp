#include <iostream>
using namespace std;

class A{
    public:
    int x;
    
    A(){
        cout<<"constructor"<<endl;
    }
    
    ~A(){
        cout<<"destructor"<<endl;
    }
};

int main()
{
    A obj;
    
    obj.x=7;
    cout<<obj.x<<endl;

    return 0;
}