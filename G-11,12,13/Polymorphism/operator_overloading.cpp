// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Calculator{
    public:
    int x, y;
    
    int sum(){
        return x + y;
    }

    void operator - (Calculator & instance){
        int p = this->x;
        // cout<<"Add of this: "<<this<<endl;
        int q = instance.x;
        // cout<<&instance<<endl;
        cout << q * p << endl;
    }
};

int main(){
    Calculator C1, C2;

    C1.x = 3;
    // C1.y = 3;
    C2.x = 12;

    C1 - C2;
    
    // cout<<&C1<<endl;
    // cout<<&C2<<endl;
    // cout<<"Add of C1: "<<&C1<<endl;

    // C1.y=5;

    cout << C1.sum();

    return 0;
}
