import java.util.Arrays;
import java.util.Scanner;

public class sort_function
{
	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);
		int n = obj.nextInt();
		
		int arr[] = new int[n];
		for(int i=0;i<n;i++){
		    arr[i] = obj.nextInt();
		}
		
		Arrays.sort(arr);
// 		Arrays.sort(arr, 2, n-1);
		
		for(int i=0;i<n;i++){
		    System.out.print(arr[i]+" ");
		}
	}
}