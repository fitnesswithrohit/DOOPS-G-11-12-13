import java.util.*;
public class stack_using_array
{
    public static class Stack {
        int arr[] = new int[5];
        
        int i=0;
        
        void push(int val){
            if(i==5){
                System.out.println("stack is full");
                return;
            }
            arr[i] = val;
            i++;
        }
        
        int peek(){
            if(i==0){
                System.out.println("stack is empty");
                return -1;
            }
            return arr[i-1];
        }
        
        int pop(){
            if(i==0){
                System.out.println("stack is empty");
                return -1;
            }
            
            int ans = arr[i-1];
            arr[i-1] = 0;
            i--;
            return ans;
        }
        
        boolean isEmpty(){
            if(i==0) return true;
            
            return false;
        }
        
        int size(){
            return i;
        }
        
        void print(){
            for(int j=0;j<i;j++){
                System.out.println(arr[j] + " ");
            }
            System.out.println();
        }
    }
	public static void main(String[] args) {
		Stack st = new Stack();
		
		st.push(3);
		st.push(5);
		st.push(8);
		st.push(9);
		st.push(18);
		st.push(19);
		
		System.out.println(st.peek());
		System.out.println(st.pop());
		
		System.out.println(st.size());
		System.out.println(st.isEmpty());
		
// 		st.print();
		
		
	}
	
	
	
	
	
	
	
	
	
}