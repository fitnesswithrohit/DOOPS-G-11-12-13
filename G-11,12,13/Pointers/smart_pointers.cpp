#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int *p = new int(14); //raw
    // cout<<p<<endl;
    // cout<<*p<<endl;
    
    // delete p;// after deleting : dangling
    
    // cout<<p<<endl;
    // cout<<*p<<endl;
    
    // int *p; //wild pointer
    // cout<<p<<endl<<*p<<endl;
    
    //smart pointer : wrapper class act a pointer
    //unique pointer:
    // unique_ptr<int> up(new int(10));
    
    // cout<<*up<<endl;
    // cout<<&up<<endl;
    // cout<<&(*up)<<endl;
    
    // unique_ptr<int> up1;
    
    // up.reset(new int(3));
    
    // cout<<*up<<endl;
    // cout<<&up<<endl;
    // cout<<&(*up)<<endl;
    
    // // up1 = up;//wrong way
    // up1 = move(up);
    
    // cout<<*up1<<endl;
    // cout<<&up1<<endl;
    // cout<<&(*up1)<<endl;
    
    //Shared pointer
    
    // shared_ptr<int> sp(new int(10));
    
    // cout<<*sp<<endl;
    // cout<<sp<<endl;
    // cout<<&(*sp)<<endl;
    
    // shared_ptr<int> sp1;
    // sp1 = sp;
    
    // cout<<sp.use_count()<<endl;
    // cout<<sp1.use_count()<<endl;
    
    // sp.reset();
    
    // cout<<sp.use_count()<<endl;
    // cout<<sp1.use_count()<<endl;
    
    // cout<<*sp<<endl;
    // cout<<sp<<endl;
    // cout<<&(*sp)<<endl;
    
    // cout<<*sp1<<endl;
    // cout<<sp1<<endl;
    // cout<<&(*sp1)<<endl;
    
    // cout<<*sp<<endl;
    // cout<<sp<<endl;
    // cout<<&(*sp)<<endl;
    
    shared_ptr<int> sp(new int(10));
    sp.reset();
    
    weak_ptr<int> wp;
    wp = sp;
    
    
    cout<<sp.use_count()<<endl;
    cout<<wp.use_count()<<endl;
    // cout<<*sp<<endl;
    // cout<<*(wp.lock())<<endl;

    return 0;
}




