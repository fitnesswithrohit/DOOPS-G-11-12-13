import java.util.*;
public class bubble_sort {
    static void bubbleSort(int arr[], int n){
        int i, j;
        for (i = 0; i < n - 1; i++) {
            boolean flag = false;
            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    flag = true;
                }
            }
            if (flag == false)
                break;
        }
    }

    public static void main(String args[]){
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = obj.nextInt();
        }
        
        bubbleSort(arr, n);
        for (int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
