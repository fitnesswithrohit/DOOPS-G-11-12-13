import java.util.*;//Adding from start and from end
public class Create_linkedlist
{
    Node head;
    
    class Node{
        String data;
        Node next;
        
        Node(String d){
            data = d;
        }
    }
    
    public void start(String val){
        Node nw = new Node(val);
        
        if(head == null){
            head = nw;
            return ;
        }
        
        nw.next = head;
        head = nw;
    }
    
    public void end(String val){
        Node nw = new Node(val);
        
        if(head == null){
            head = nw;
            return ;
        }
        
        if(head.next == null){
            head.next = nw;
            return ;
        }
        
        Node curr = head;
        
        while(curr.next != null){
            curr = curr.next;
        }
        
        curr.next = nw;
    }
    
    public void print(){
        if(head == null){
            System.out.println("list is empty");
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
		Create_linkedlist ll = new Create_linkedlist();
		
		ll.start("rohit");
		ll.start("advitya");
		ll.start("arun");
		
		ll.end("anshika");
		ll.end("anshiya");
		
		ll.print();
	}
}






