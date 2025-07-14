#include <iostream>
using namespace std;

int main()
{
    int x = 8;
    int *p = &x;
    // cout<<p<<endl;
    // cout<<&x<<endl;
    // cout<<*p<<endl;
    // cout<<x<<endl;
    
    int *t = p;
    // cout<<t<<endl;
    // cout<<&x<<endl;
    // cout<<*t<<endl;
    // cout<<x<<endl;
    
    // x=8 //a1 <---- p <------t
    //p, *p
    cout<<&x<<endl;
    int **s = &p;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<**s<<endl;
    cout<<*s<<endl;
    cout<<s<<endl;
    cout<<*t<<endl;
    cout<<t<<endl;
    
    
    // cout<<++p<<endl;
    // cout<<p++<<endl;
    // cout<<p++<<endl;
    // cout<<*p<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(x)<<endl;
    
    
    int *z;
    
    cout<<z<<endl;
    // cout<<*z<<endl;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int x = 8;
    int *p = &x; //pointer to variable
    
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p++<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    // cout<<x<<endl;
    // cout<<&x<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    
    // cout<<++x<<endl;
    // cout<<(*p)++<<endl;
    // cout<<x<<endl;
    // cout<<p++<<endl;
    // cout<<p<<endl;
    
    int *t = p;//copy a pointer
    
    // cout<<x<<endl;
    // cout<<&x<<endl;
    // cout<<t<<endl;
    // cout<<*t<<endl;
    
    // int **z = &p;//pointer to pointer
    
    // cout<<x<<endl;
    // cout<<&x<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<**z<<endl;
    // cout<<*z<<endl;
    // cout<<z<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(x)<<endl;
    // cout<<sizeof(z)<<endl;

    return 0;
}