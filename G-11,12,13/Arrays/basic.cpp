#include <iostream>
using namespace std;

int main()
{
    // int arr[4] = {1,2,3,4};
    
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    
    // cout << 0[arr] << endl;
    // cout << *(arr+1) << endl;
    
    // int arr[7];
    
    // for(int i=0;i<7;i++){
    //     cin >> arr[i];
    // }
    
    // for(int i=0;i<7;i++){
    //     cout << arr[i] << " ";
    // }
    
    int arr[5] = {1,2};
    
    // cout << sizeof(arr)/sizeof(int) << endl;
    
    cout << &arr[0] <<endl;//add of first element
    cout << &arr << endl;///gives entire array add
    cout << arr << endl;//same first element
    cout << &arr + 1 << endl; // +1 to whole array
    cout << arr + 1 << endl; // +1 to int first
    cout << &arr[4] + 1<< endl;
    
    
    return 0;
}





























