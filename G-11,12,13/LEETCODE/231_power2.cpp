class Solution {
public:
    // bool isPowerOfTwo(int n) {
    //     for(int i=0;i<31;i++){
    //         int sol = pow(2,i);
    //         if(sol == n) return true;
    //     }
    //     return false;
    // }
    bool isPowerOfTwo(int n) {
         if (n <= 0) {
            return false;
        }
        if (n == 1) {
            return true;
        }
        if (n % 2 != 0) {
            return false;
        }
        return isPowerOfTwo(n / 2);
    }
};