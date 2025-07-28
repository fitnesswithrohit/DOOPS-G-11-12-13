#include <iostream>//Friend function

using namespace std;

class Numbers{
    int x;
    
    public:
    Numbers(){
        
    }
    Numbers(int a){
        x=a;
    }
    void setValues(int a){
        x=a;
    }
    
    void print(){
        cout << x << endl;
    }
    
    friend Numbers answer(Numbers o1, Numbers o2);
};

// Numbers answer(Numbers o1, Numbers o2){
//     Numbers ob3;
//     ob3.setValues(o1.x + o2.x);
//     return ob3;
// }

// int answer(Numbers o1, Numbers o2){
//     return o1.x + o2.x;
// }

Numbers answer(Numbers o1, Numbers o2){
    return Numbers(o1.x + o2.x);//(2+3) / (5)
}

int main()
{
    Numbers ob1, ob2,sol;
    //Numbers ob(4);
    
    ob1.setValues(2);
    ob2.setValues(3);
    
    ob1.print();
    ob2.print();
    
    sol = answer(ob1,ob2);
    sol.print();
    
    // cout << answer(ob1,ob2);

    return 0;
}