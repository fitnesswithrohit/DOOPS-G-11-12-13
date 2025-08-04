class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        else if(n%4!=0 || n==0) return false;
        return isPowerOfFour(n/4);
        // if(n == 0){
        //     return false;
        // }
        
        // while(n != 1){
        //     if(n%4 != 0){
        //         return false;
        //     }
        //     else{
        //         n /= 4;
        //     }
        // }
        // return true;
    }
};