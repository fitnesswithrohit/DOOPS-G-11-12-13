// Quick Sort  //taking first element as pivot
import java.util.*;

public class quick_sort {
    public static int partition_arr(int[] arr, int s, int e) {
        int p = arr[s];
        int l=s; //2 6 1 8 4
        int r=e;
        while(l<r){
            while(arr[l] <= p && e>l) l++;
            while(arr[r] > p) r--;
            
            if(l<r){
                int temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
            }
        }
        int temp = arr[s];
        arr[s] = arr[r];
        arr[r] = temp;
        return r;
    }
    
    public static void quickSort(int[] arr, int s, int e) {
        if (s >= e) return;
        int p = partition_arr(arr, s, e);
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        quickSort(arr, 0, n - 1);

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}




// import java.util.*; //Quick Sort : taking last element as pivot

// public class Main
// {
//     public static int partition(int [] arr, int a, int e){
//         int pivot = arr[e];
//         int res = s-1; // using for pivot correct position // s=0 , res=-1, 0, 1
//         for(int i=s;i<e;i++){
//             if(arr[i] < pivot){
//                 res++;
//                 int temp = arr[i];
//                 arr[i] = res;
//                 arr[res] = temp;
//             }
//         }
        
//         res++;
//         int temp = arr[res];
//         arr[res] = arr[e];
//         arr[e] = temp;
        
//         return res;
//     }
//           i
//     //6 8 3 9 4
//     // pivot = arr[e] = 4
//             i
//     //3 8 6 9 4
//     //3 4 6 9 8
    
//     // check whether element is less than pivot or not : is less then skip
    
//     public static void quicksort(int arr[], int s, int e){
//         if(s>=e) return ;
        
//         int p = partition(arr,s,e);
//         quickSort(arr, s, p-1);
//         quickSort(arr, p+1, e);
//     }
    
// 	public static void main(String[] args) {
// 		Scanner obj = new Scanner(System.in);
// 		int n = obj.nextInt();
		
// 		int arr[] = new int[n];
		
// 		for(int i=0;i<n;i++){
// 		    arr[i] = obj.nextInt();
// 		}
		
// 		quicksort(arr, 0, n-1);
		
// 		for(int i=0;i<n;i++){
// 		    System.out.print(arr[i]+" ");
// 		}
// 	}
// }