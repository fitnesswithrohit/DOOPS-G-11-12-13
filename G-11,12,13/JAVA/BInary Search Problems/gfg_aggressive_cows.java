import java.util.*;

public class gfg_aggressive_cows {
    public static boolean placed(int stalls[], int m, int k, int n){
        int total_plced_cows = 1;
        int gap, previous_cow = stalls[0];
        for(int i=1;i<n;i++){
            gap = stalls[i] - previous_cow;
            if(gap >= m){
                total_plced_cows++;
                previous_cow = stalls[i];
            }
            
            if(total_plced_cows >= k){
                return true;
            }
        }
        
        return false;
    }
    
    public static int aggressiveCows(int[] stalls, int k) {
        // code here
        int n=stalls.length;
        Arrays.sort(stalls);
        int s=0;
        int e=stalls[n-1] - stalls[0];
        int dis=-1, m;
        while(s<=e){
            m=s+(e-s)/2;
            if(placed(stalls, m ,k, n)){
                s=m+1;
                dis = m;
            }
            else{
                e=m-1;
            }
        }
        
        return dis;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        System.out.println(aggressiveCows(arr, k));
    }
}
