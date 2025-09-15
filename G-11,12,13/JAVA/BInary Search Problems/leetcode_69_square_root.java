import java.util.*;
public class leetcode_69_square_root {
    public static int mySqrt(int x) {
        if(x==1) return 1;
        long s=1, e=x/2;
        while(s<=e){
            long mid = s+(e-s)/2;
            if(mid*mid == x) return (int)mid;

            if(mid*mid < x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }

        return (int)e;
    }
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();

        System.out.println(mySqrt(n));
    }
}


// x=8