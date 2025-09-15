import java.util.*;
public class leetcode_81_search_2 {
    public static boolean search(int[] nums, int target) {
        int n=nums.length;
        
        int s=0, e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            
            if(nums[mid] == target){
                return true;
            }

            if((nums[s] == nums[mid]) && (nums[e] == nums[mid])){
                s++;
                e--;
                // s=mid+1;
                // e--;
            }
            else if(nums[s] <= nums[mid]){
                if((nums[s] <= target) && (nums[mid] > target)){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if((nums[e] >= target) && (nums[mid] < target)){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int target = sc.nextInt();
        System.out.println(search(arr, target));
    }
}
