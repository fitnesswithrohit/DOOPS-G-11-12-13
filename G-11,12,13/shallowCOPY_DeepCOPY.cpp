#include <iostream>
using namespace std;

class Students{
    public:
    int marks;
    
    public:
    Students(){}
    
    Students(int marks){
        this->marks = marks;
    }
    
    // Students(Students copy){ //value
    //     this->marks = copy.marks;
    // }
    
    Students(Students& copy){ //by reference
        this->marks = copy.marks;
    }
    
    int get_marks(){
        return marks;
    }
};

int main()
{
    // Students obj1(19);
    
    // cout<<obj1.get_marks()<<endl;
    
    // Students obj2(obj1);//obj2=obj1;
    
    // cout << obj2.get_marks()<<endl;
    
    // Students obj3=obj1;
    // // Students obj3;
    // // obj3 = obj1;
    
    // cout << obj3.get_marks()<<endl;
    
    Students *obj1 = new Students;
    obj1 -> marks = 123;
    // cout<<obj1 -> marks<<endl;
    
    cout << &obj1 << endl;
    cout << obj1 << endl;
    cout<<&(obj1 -> marks)<<endl;
    
    // Students *obj2 = new Students(*obj1);
    // cout<<obj2 -> marks<<endl;
    
    // obj2->marks=24;
    
    // cout<<obj1 -> marks<<endl;
    // cout<<obj2 -> marks<<endl;

    return 0;
}







































