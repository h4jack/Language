//Exception in Java
import java.util.*;

class Exception{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        double a = sc.nextInt();
        double b = sc.nextInt();
        try{
            double c = a / b;
            System.out.println(c);
        }catch(ArithmeticException e){
            System.out.println("Division by 0");
        }
        System.out.print("After catch statement.");
    }
}