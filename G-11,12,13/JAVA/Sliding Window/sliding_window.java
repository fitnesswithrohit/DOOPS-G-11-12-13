import java.util.*;

public class sliding_window
{
    public static int slidingWindow(int arr[], int k){
        int n = arr.length;
        
        if (n <= k) {
            return -1;
        }

        int mxsum = 0;
        for (int i = 0; i < k; i++){
            mxsum += arr[i];
        }

        int window = mxsum;
        for (int i = k; i < n; i++) {
            window += arr[i] - arr[i - k];
            mxsum = Math.max(mxsum, window);
        }

        return mxsum;
    }
    
	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);
		int n = obj.nextInt();
		
		int arr[] = new int[n];
		for(int i=0;i<n;i++){
		    arr[i] = obj.nextInt();
		}
		
		int k = obj.nextInt();
		
		System.out.println(slidingWindow(arr, k));
	}
}