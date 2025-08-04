class Solution {
public:
    bool isPowerOfThree(int n) {
        // return n>0 && 1162261467 % n == 0;
        if(n==1) return 1;
        if(n<=0) return 0;
        if(n%3 != 0) return 0;
        else{
            return isPowerOfThree(n/3);
        }
    }
};