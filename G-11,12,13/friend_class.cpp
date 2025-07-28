#include <iostream>//friend class
using namespace std;

class Numbers;

class D{
    public:
    
    int add(Numbers obj1, Numbers obj2);
};

class Numbers{
    int x;
    
    public:
    void setValues(int a){
        x=a;
    }
    
    void print(){
        cout << x << endl;
    }
    
    // friend int D :: add(Numbers o1, Numbers o2);
    friend class D;
};

int D :: add(Numbers obj1, Numbers obj2){
        int ans = obj1.x + obj2.x;
        return ans;
    }

int main()
{
    Numbers ob1, ob2;
    
    ob1.setValues(2);
    ob2.setValues(3);
    
    ob1.print();
    ob2.print();
    
    D sum;
    cout << sum.add(ob1,ob2);
    

    return 0;
}