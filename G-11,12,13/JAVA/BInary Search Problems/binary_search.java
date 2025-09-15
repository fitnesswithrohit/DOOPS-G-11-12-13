import java.util.*;

public class binary_search {
    public static boolean binarySearch(int arr[], int n, int t){
        int s=0;
        int e=n-1, m;
        while(s<=e){
            m = s+(e-s)/2;
            if(arr[m] == t) return true;
            else if(arr[m] < t){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }

        return false;
    }
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();
        int t = obj.nextInt();

        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = obj.nextInt();
        }

        System.out.println(binarySearch(arr,n,t));
    }  
}
