#include <bits/stdc++.h>
using namespace std;
class X;
class Y;

class X{
    public:
    shared_ptr<Y> pX; // instead create here weak_ptr<Y> pX; to solve circular (circular dependency) referencing problem
    
    void set(shared_ptr<Y> &p1){
        pX = p1;
    }
};

class Y{
    public:
    shared_ptr<X> pY; // instead create here weak_ptr<X> pY; to solve circular (circular dependency) referencing problem
    void set(shared_ptr<X> &p2){
        pY = p2;
    }
};

int main()
{
    shared_ptr<X> oX (new X()) ;
    shared_ptr<Y> oY (new Y());
    
    oX -> set(oY);
    oY -> set(oX);
    // cout<<oY.use_count ()<<endl;
    

    return 0;
}