// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//Method will fail if n>=14
// int Trail(int n){
//     int fact=1;
//     for(int i=2;i<=n;i++){
//         fact *= i;
//     }
//     int ans = 0;
//     while(fact % 10 == 0){
//         ans++;
//         fact /= 10;
//     }
//     return ans;
// }

int Trail(int n){
    int ans = 0;
    for(int i=5;i<=n;i=i*5){
        ans = ans + n/i;
    }
    
    return ans;
}

int main() {
    int n;
    cin>>n;
    cout << Trail(n);

    return 0;
}