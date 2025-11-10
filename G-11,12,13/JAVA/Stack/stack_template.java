import java.util.*;

public class stack_template
{
	public static void main(String[] args) {
		Stack<Integer> stack = new Stack<Integer>();
		
		stack.push(1);
		stack.push(5);
		stack.push(3);
		stack.push(11);
		stack.push(15);
		
		System.out.println(stack);
		
		while(!stack.isEmpty()){
		    System.out.println(stack.peek());
		    stack.pop();
		}
		
		
	}
}