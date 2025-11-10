import java.util.*;

class Hello{
    {
        System.out.println("instance block");
    }
    
    static{
        System.out.println("static block");
    }
}

public class static_and_instance_keyword
{
	public static void main(String[] args) {
		Hello obj = new Hello();
	}
}