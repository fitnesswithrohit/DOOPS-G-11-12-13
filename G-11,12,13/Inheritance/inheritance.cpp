#include <iostream>
using namespace std;

class Student{ //parent class , super class
    // protected:
    public:
    int roll;
    int marks;
    
    public:
    void set(int roll){
        this->roll = roll;
    }
    
    void print(){
        cout<<"It's working"<<endl;
    }
};

class S1:public Student{ // child class, sub class
    public:
    char name_initial;
    
    
};

// class S2:private Student{ // child class, sub class
//     public:
//     char name_initial;
// };


int main()
{
    S1 obj1;
    obj1.roll = 23;
    obj1.print();
    
    cout<<obj1.roll<<endl;
    obj1.name_initial = 'A';
    cout<<obj1.name_initial<<endl;

    return 0;
}