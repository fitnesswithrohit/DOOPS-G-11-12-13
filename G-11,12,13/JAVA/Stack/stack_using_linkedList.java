import java.util.*;// Stack : using Linkedlist (LIFO : Last In First Out)

public class stack_using_linkedList
{
     Node head;
    
     class Node{
        int data;
        Node next;
        
        Node(int data){
            this.data = data;
            this.next = null;
        }
    }
    
    public boolean isEmpty(){
        return head == null;
    }
    
    public void push(int data){
        Node newNode = new Node(data);
        
        if(isEmpty()){
            head = newNode;
            return ;
        }
        
        newNode.next = head;
        head = newNode;
    }
    
    public int pop(){
        if(isEmpty()){
            System.out.println("linkedlist is empty");
            return -1;
        }
        
        int top = head.data;
        head = head.next;
        return top;
    }
    
    public int peek(){
        if(isEmpty()){
            System.out.println("linkedlist is empty");
            return -1;
        }
        
        return head.data;
    }
    
	public static void main(String[] args) {
		stack_using_linkedList stack = new stack_using_linkedList();
		
		stack.push(3);
		stack.push(6);
		stack.push(9);
		stack.push(7);
		
	    
	    while(!stack.isEmpty()){
	        System.out.print(stack.peek() + "->");
	        stack.pop();
	        
	       // System.out.println(stack.pop());
	    }
		
	}
}



// head = null

// 7 - 9 - 6 - 3 - null

// 7
// 9
// 6
// 3

// 7