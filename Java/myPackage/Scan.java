import java.util.Scanner;
class Scan{
    public static Scanner sc = new Scanner(System.in);
    
    public double i(){
        double a = sc.nextDouble();
        return a;
    }
    public static void main(String[] args){
        Scan sn = new Scan();
        int c = sc.nextInt();
        double b = sn.i();
        System.out.print("the values are " + c + b);
    }
}