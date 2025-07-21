#include <iostream>
using namespace std;

void update(int arr[], int n){
    arr[0] = 7;
}

// void update(int *arr, int n){
//     arr[0] = 7;
// }

int main()
{
    int arr[5] = {1,2,3,4,5};
    
    update(arr,5);
    
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    return 0;
}