import java.util.Scanner;

public class leetcode_34_first_and_last {

    public static int last_pos(int[] nums, int target, int n){
        int s=0;
        int e=n-1;
        int sol=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid] == target){
                sol = mid;
                s=mid+1;
            }
            else if(nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return sol;
    }

    public static int first_pos(int[] nums, int target, int n){
        int s=0;
        int e=n-1;
        int sol=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid] == target){
                sol = mid;
                e = mid-1;
            }
            else if(nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return sol;
    }
    public static int[] searchRange(int[] nums, int target) {
        int n=nums.length;
        int a = first_pos(nums, target, n);
        int b = last_pos(nums, target, n);
        return new int []{a,b};
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        
        int t = sc.nextInt();
        int ans[] = searchRange(arr, t);
        System.out.println(ans[0]);
        System.out.println(ans[1]);
    }
}
