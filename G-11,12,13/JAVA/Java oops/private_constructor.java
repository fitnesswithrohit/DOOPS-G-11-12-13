import java.util.*;

class Pri{
    private Pri(){
        System.out.println("Private");
    }
    
    // Pri obj = new Pri();
    
    public static Pri createInstance() {
        return new Pri();
    }
    
    // public static int hl(){
    //     return 5;
    // }
}

public class private_constructor
{
	public static void main(String[] args) {
	   Pri obj = Pri.createInstance();
	   //Pri obj = int.hl();

	}
}