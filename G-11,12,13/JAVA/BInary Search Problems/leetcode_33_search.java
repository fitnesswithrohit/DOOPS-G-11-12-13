import java.util.*;
public class leetcode_33_search {
    public static int search(int[] nums, int target) {
        int n=nums.length;
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(target == nums[mid]) return mid;
            if(nums[s] <= nums[mid]){
                if(target < nums[mid] && target >= nums[s]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(target > nums[mid] && target <= nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        
        int t = sc.nextInt();
        System.out.println(search(arr, t));
    }
}
