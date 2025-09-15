import java.util.*;
public class leetcode_1539_kth_missing_positive_num {
    public static int findKthPositive(int[] arr, int k) {
        int n = arr.length;
        int s=0, e=n-1;
        int missing;
        while(s<=e){
            int m = s+(e-s)/2;
            missing = arr[m] - (m+1);

            if(missing >= k) e=m-1;
            else s=m+1;
        }

        if(e<0) return k;

        return arr[e] + (k-(arr[e]-(e+1)));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        System.out.println(findKthPositive(arr, k));
    }
}
