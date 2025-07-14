#include <iostream>
using namespace std;

//bydefault data members and functions are private;
class Avengers{
    public:
    int power;
    char level;
    
    Avengers(){
        cout << " constructor on" << endl;
    }
    
    Avengers(int power){ //parameterized
        this -> power = power;
        cout << this << endl;
        // cout << " constructor parameterized" << endl;
    }
    
    Avengers(int power, char l){ //parameterized
        this -> power = power;
        level = l;
        cout << " constructor parameterized two" << endl;
    }
    
    // public:
    // int getPower(){
    //     return power;
    // }
    
    // char getLevel(){
    //     return level;
    // }
    
    // void setPower(int x){
    //     power = x;
    // }
    
    // void setLevel(char y){
    //     level = y;
    // }
    
    // void setPower(int power){
    //     this -> power = power;
    // }
    
    // void setLevel(char level){
    //     this -> level = level;
    // }
};

int main()
{
    // Avengers hulk;
    // hulk.power = 2;
    // hulk.level = 'A';
    
    // cout << hulk.power << endl;
    // cout << hulk.level << endl;
    
    // Avengers iron;
    // iron.power = 4;
    // iron.level = 'B';
    
    // cout << iron.power << endl;
    // cout << iron.level << endl;
    
    
    // Avengers captain;
    // captain.setPower(2);
    // captain.setLevel('A');
    
    // cout << captain.getPower() << endl;
    // cout << captain.getLevel() << endl;
    
    // Avengers drstarnge;
    
    Avengers wonderwomen(4);
    cout << &wonderwomen << endl;
    // cout << wonderwomen.power << endl;
    
    // Avengers spiderman(6,'S');
    
    // cout << spiderman.power;

    

    return 0;
}