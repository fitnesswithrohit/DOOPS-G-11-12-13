import java.util.*;//From start and from end

public class Delete_linkedList
{
    Node head;
    int size;
    
    class Node{
        int data;
        Node next;
        
        Node(int d){
            data = d;
            next = null;
            size++;
        }
    }
    
    public void start(int data){
        Node newNode = new Node(data);
        
        if(head == null){
            head = newNode;//
            return ;
        }
        
        // head = null
        // 1 -> null 
        //2 -> 1 -> null
        
        newNode.next = head;
        head = newNode;
    }
    
    public void end(int data){
        Node newNode = new Node(data);
        
        if(head == null){//list is empty or not
            head = newNode;
            return ;
        }
        
        if(head.next == null){
            head.next = newNode;
            return ;
        }
        
        Node curr = head;
        
        while(curr.next != null){
            curr = curr.next;
        }
        
        curr.next = newNode;
    }
    
    public void delete_start(){
        if(head == null){
            System.out.println("ll is empty, no node");
            return ;
        }
        
        Node curr = head; // head = head.next;
        curr = curr.next;
        head = curr;
    }
    
    public void delete_end(){
        if(head == null){
            System.out.println("no node");
            return ;
        }
        /// 1 2 3 4 null
        ///     c 
        if(head.next == null){
            System.out.println("single node");
            head = null;
        }
        
        Node curr = head;
        while(curr.next.next != null){
            curr = curr.next;
        }
        
        curr.next = null;
    }
    
    public void print(){
        if(head == null){
            System.out.println("ll is empty");
            return ;
        }
        
        Node curr = head;
        
        while(curr != null){
            System.out.print(curr.data + "->");
            curr = curr.next;
        }
        
        System.out.println("null");
    }
    
	public static void main(String[] args) {
		Delete_linkedList ll = new Delete_linkedList();
		
		ll.start(1);
		ll.start(3);
		ll.start(5);
		
		ll.end(2);
		ll.end(7);
		
		ll.print();
		
		ll.delete_start();
		ll.delete_end();
		
		ll.print();
	}
}





