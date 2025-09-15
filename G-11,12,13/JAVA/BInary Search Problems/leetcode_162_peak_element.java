import java.util.*;
public class leetcode_162_peak_element {
    public static int findPeakElement(int[] arr) {
        int s=0,e=arr.length-1;
		while(s<e){
			int mid=(s+e)/2;
			if(arr[mid]>=arr[mid+1]){e=mid;}
			else{s=mid+1;}
		}
		return s;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println(findPeakElement(arr));
    }
}
