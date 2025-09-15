#include <iostream> //sum of array elements
#include <algorithm> 
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=0;
    [&]()->void{
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
    }();
    cout<<sum<<endl;
    return 0;
}


// #include <iostream>
// #include <algorithm> // for for_each
// using namespace std;

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum=0;
//     for_each(arr, arr + n, [&](int x) {
//         // for(int i=0;i<n;i++){
//             sum += x;
//         // }
//         cout<<sum<<endl;
//     });
//     // cout<<sum<<endl;
//     return 0;
// }
