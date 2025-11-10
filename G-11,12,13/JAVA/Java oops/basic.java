import java.util.*; //object creation, classes, constructors(default,parameterized, copy constructor), constructor overloading, 

class First{
    int a;
    int b=8;
    
    First(int a){
        this.a = a;
    }
    
    First(First ob){
        a = ob.a;
        b = ob.b;
    }
    
    void print(){
        System.out.println(a+b);
    }
}

public class basic
{
	public static void main(String[] args) {
	    First obj = new First(4);
	    
	    obj.print();
	    
	    First obj1 = new First(obj);
	    obj1.print();
	   
	}
}