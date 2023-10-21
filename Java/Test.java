import java.util.*;
import myPackage.*;

class Test{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter two number : ");
    int a = sc.nextInt();
    int b = sc.nextInt();
    
    Gcd myObj = new Gcd();

    myObj.assign(a,b);
    myObj.gcd();
  }
}