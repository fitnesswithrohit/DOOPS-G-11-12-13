#include <iostream>
using namespace std;

void value(int n){
    n = n+1;
    cout << n << endl;
}

void reference(int &n){
    n = n+1;
    cout << n << endl;
}

// void address(int *n){
//     *n = *n+1;
//     cout << n << endl;
// }

int main()
{
    int n=7;
    
    value(n);
    
    cout << n << endl;
    
    reference(n);
    
    cout << n << endl;
    
    // address(&n);
    // cout << &n << endl;
    // cout << n << endl;


    return 0;
}