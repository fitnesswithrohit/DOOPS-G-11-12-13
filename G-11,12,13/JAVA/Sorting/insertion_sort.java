// Insertion sort
import java.util.*;
public class insertion_sort {
    public static void insertionsort(int arr[], int n)
    {
        for(int i=1;i<n;i++){
            int temp = arr[i];
            int j; 
            for(j=i-1;j>=0;j--){
                if(arr[j] > temp){
                    arr[j+1] = arr[j];
                }else{
                    break;
                }
            }
            arr[j+1] = temp;
        }
    }

    public static void main(String args[]){
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = obj.nextInt();
        }
        
        insertionsort(arr, n);
        for (int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
    }
}