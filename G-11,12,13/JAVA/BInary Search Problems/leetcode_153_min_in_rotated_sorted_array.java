import java.util.Scanner;

public class leetcode_153_min_in_rotated_sorted_array {
    public static int findMin(int[] nums) {
        int n=nums.length;
        int s=0, e=n-1;
        int mid=0;
        while(s<e){
            mid = s+(e-s)/2;
            if(nums[mid] > nums[e]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }

        return nums[e];
    }
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();  

        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = obj.nextInt();
        }

        System.out.println(findMin(arr));
    }
}
