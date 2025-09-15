#include <iostream>
using namespace std;

// void add(int x, int y){
//     cout<<x+y<<endl;
// }

int main()
{
    int x=2,y=8;
    // add(x,y);
    //syntax : []()-> return_type {}
    
    // [](int x, int y)->void {cout<<x+y<<endl;}(x,y);
    
    // [](int x, int y)->void {
    //     x++;
    //     cout<<x+y<<endl;
    // }(x,y);
    
    // [=]()->void {
    //     // x++;//will give you error and it non-mutable
    //     cout<<x+y<<endl;
    // }();
    
    // [&]()->void {
    //     x++;
    //     cout<<x+y<<endl;
    // }();
    
    // [=,x,y]()->void {
    //     cout<<x+y<<endl;
    // }();
    
    // [&,x]()->void {
    //     y++;
    //     cout<<x+y<<endl;
    // }();
    
    
    cout<<x<<endl;
    return 0;
}




// #include <iostream>
// using namespace std;
// // void add(int x, int y){
// //     cout << x+y<<endl;
// // }
// int main()
// {
//     int x=3, y=8;
//     // add(x, y);
//     // [](int x,int y)->void{cout<<x+y<<endl;}(x,y);
//     // [](int &x,int &y)->void{cout<<x+y<<endl;}(x,y);
//     // [x,y]()->void{cout<<x+y<<endl;}();
//     // [&x, &y]()->void{cout<<x+y<<endl;}();
//     // [=]()->void{cout<<x+y<<endl;x++}();//jab assignment operator use karte = then ye access kar sakta but changes nahi it means non-mutable lambda
//     // [=]()->void{cout<<x+y<<endl;}();
    
//     // [&]()->void{cout<<x+y<<endl;x++;cout<<x<<endl;}();//mutable lambda

//     // [&, x]()->void{cout<<x+y<<endl;}();
//     // [=, &y]()->void{cout<<x+y<<endl;}();
    
//     return 0;
// }